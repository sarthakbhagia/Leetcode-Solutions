class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};

        vector<int> sorted={};
        sort(nums.begin(),nums.end());

        int min = nums[0];
        int max = nums[nums.size()-1];

        for(int i=min; i<=max; i++){
            if(!ranges::contains(nums, i)){
                sorted.push_back(i);
            }
        }

        return sorted;
        
    }
};