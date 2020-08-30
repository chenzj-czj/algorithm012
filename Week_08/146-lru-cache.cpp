struct CacheNode {
    int key, value;
    CacheNode *pre, *next;

    CacheNode(int key_ = 0, int value_ = 0) 
        : key(key_), value(value_), pre(NULL), next(NULL) {}
};

class LRUCache {
public:
    LRUCache(int capacity) {
        _capacity = capacity;
        _head = new CacheNode();
        _tail = _head;
    }
    
    int get(int key) {
        auto it = _cache.find(key);
        if (it == _cache.end()) return -1;

        moveToTail(it->second);
        return it->second->value;
    }
    
    void put(int key, int value) {
        auto it = _cache.find(key);

        if (it != _cache.end()) {
            it->second->value = value;
            moveToTail(it->second);
        }
        else if ((int)_cache.size() < _capacity) {
            auto node = new CacheNode(key, value);
            addToTail(node);
            _cache[key] = node;
        }
        else {
            _cache.erase(_head->next->key);
            moveToTail(_head->next);
            _tail->key = key;
            _tail->value = value;
            _cache[key] = _tail;
        }
    }

    ~LRUCache() {
        auto pCurr = _head;
        while (pCurr != NULL) {
            auto next = pCurr->next;
            delete pCurr;
            pCurr = next;
        }
    }

private:
    int _capacity;
    CacheNode *_head, *_tail;
    unordered_map<int, CacheNode*> _cache;

    void moveToTail(CacheNode *node) {
        if (node == _tail) return;

        node->pre->next = node->next;
        node->next->pre = node->pre;

        addToTail(node);
    }

    void addToTail(CacheNode *node) {
        node->next = _tail->next;
        _tail->next = node;
        node->pre = _tail;
        _tail = node;
    }
};