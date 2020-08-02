class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int num5 = 0, num10 = 0;
        for (int i : bills) {
            if (i == 5) num5++;
            else if (i == 10) {num10++; num5--;}
            else if (num10 > 0) {num10--; num5--;}
            else num5 -= 3;

            if (num5 < 0) return false;
        }
        return true;
    }
};