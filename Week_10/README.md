# 毕业总结


## 学习方法
1. 不会的题目不要死磕，把时间花在刀刃上。
2. 题目要多做，多过遍数，才能越来越熟练。
3. 学有余力多学习其他优秀的解法。

## 学习总结

#### 递归、分治、回溯
1. 做递归相关的题目时，要找到最近最简的方法，将问题拆分成重复子问题，或者通过数学归纳法总结。
2. 分治算法、回溯算法也是用递归实现。

#### 贪心算法
1. 贪心算法在每一步选择中都选择当前状态下的最好或最优的解。
2. 贪心算法与动态规划的不同在于，它对每一个子问题都作出选择，不进行回退操作。

#### 动态规划
1. 动态规划和递归或者分治没有根本上的区别，关键看有无最优的子结构。
2. 动态规划和递归或者分治的共性：找到重复子问题，差异：最优子结构中途可以淘汰次优解。
3. 动态规划关键点：最优子结构，存储中间状态，状态转移方程（递推公式）。
4. 解题思路：确定base case，分解子问题，归纳DP方程，迭代/递归，剪枝。

#### 查找、搜索
1. 二分查找的三个前提：目标函数单调性、存在上下界、能够通过索引访问。
2. 搜索的优化：双向搜索、启发式搜索（A*）。
3. AVL与红黑树比较：
   AVL查询比红黑树快，因为AVL比红黑树更加平衡；
   红黑树比AVL的插入删除操作快，因为红黑树比AVL调整平衡的次数少；

#### 二叉树的前、中、后序遍历
1. 前序遍历：递归、使用栈存储父节点，与中序的区别为存储的同时便已经遍历该节点。
2. 中序遍历：递归、使用栈存储父节点。
3. 后序遍历：递归、使用双栈法、使用一个栈，父节点以null来代替。

#### 堆和二叉堆
1. 二叉堆一般都通过“数组”来实现。
2. 二叉堆是堆的一种常见且简单的实现，不是堆的最优实现。
3. 在实际使用时，堆在C++中可以使用priority_queue解决问题。

#### 字典树
1. 字典树的结点不存完整单词，从根结点到某一结点路径上的所有字符连接起来为该结点对应的字符串。
2. 字典树利用空间换时间的思想，用字符串的公共前缀降低查询时间的开销。

#### 其他
1. 哈希表、映射、集合，在C++的STL中对应的可以使用的数据结构有：map,set,unordered_map, unordered_set。
2. 二叉树、N叉树遍历，前者用到栈，后者用到队列。
3. 图的表示有邻接矩阵和领接表。
4. 平均时间复杂度为O(nlogn)的排序算法：快速排序、归并排序、堆排序。
5. 并查集适用于组团、配对问题。
6. 布隆过滤器有一定的误别率和删除困难。


## 毕业总结
1. 学习期间后半段坚持的不如前半段好，算法题的练习量不多，希望后面养成习惯，一直加强练习。
2. 训练营教会我的不仅仅只有算法的学习，还有学习方法、学习习惯，这些更加重要。
3. 结束即是开始，要将练习算法的习惯一直坚持下去。