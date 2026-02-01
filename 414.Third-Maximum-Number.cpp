class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());
       
        if (nums.size() >= 3) {
            return nums[nums.size() - 3]; 
        } 
        else {
            return nums.back(); 
        }
    }
};
