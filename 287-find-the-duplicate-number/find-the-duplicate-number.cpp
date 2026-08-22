class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
        int low = 1;
        int right = nums.size() - 1;

        while (low < right) {
            int mid = low + (right - low) / 2;
            int count = 0;

            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }

            if (count > mid) {
                right = mid;
            } 
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};