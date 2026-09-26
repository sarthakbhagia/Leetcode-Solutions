class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==nums[i]){
                    if(ans.empty() || ans[0] != nums[i]) {
                        ans.push_back(nums[i]);
                    }
                    break;
                }
                else{
                    continue;
                }
            }
        }
        return ans;

    }
};