class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
       int target=0;
       for(int i=0;i<nums.size()+1;i++){
            if(find(nums.begin(), nums.end(), i) != nums.end()){
                
            }
            else{
                target = i;
            }
       }
       return target;
       
    }
};