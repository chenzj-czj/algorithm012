class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergesort_and_count(nums, 0, nums.size() - 1);
    }

    int mergesort_and_count(vector<int>& vec, int start, int end) {
        if (start < end) {
            int mid = (start + end) / 2;
            int count = mergesort_and_count(vec, start, mid) + mergesort_and_count(vec, mid + 1, end);
            int j = mid + 1;
            for (int i = start; i <= mid; i++) {
                while (j <= end && vec[i] > vec[j] * 2L) {
                    j++;
                }
                count += j - (mid + 1);
            }
            merge(vec, start, mid, end);
            return count;
        }
        else {
            return 0;
        }
    }

    void merge(vector<int>& vec, int start, int mid, int end) {
        int n1 = mid - start + 1;
        int n2 = end - mid;
        int left[n1];
        int right[n2];

        for (int i = 0; i < n1; i++) {
            left[i] = vec[start + i];
        }
        for (int j = 0; j < n2; j++) {
            right[j] = vec[mid + 1 + j];
        }
        int i = 0, j = 0;
        for (int k = start; k <= end; k++) {
            if (j >= n2 || (i < n1 && left[i] <= right[j])) {
                vec[k] = left[i++];
            }
            else {
                vec[k] = right[j++];
            }
        }
    }
};