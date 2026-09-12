class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operation=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){
                if(nums[i]<3){
                    count+=1;
                }
                else if(nums[i]>3){
                    count+=1;
                }
            }
        }
        return count;
    }
};