class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums.size() - 1;
        int first_idx = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first_idx = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        if (first_idx == -1) {
            return {};
        }

        vector<int> result;
        int i = first_idx;
        while (i < nums.size() && nums[i] == target) {
            result.push_back(i);
            i++;
        }

        return result;
    }
};