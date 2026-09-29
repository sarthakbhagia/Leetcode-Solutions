class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int oddsum=0;
        int evensum=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                oddsum+=nums[i];
            }
            else{
                evensum+=nums[i];
            }
        }
        return oddsum-evensum;
    }
};