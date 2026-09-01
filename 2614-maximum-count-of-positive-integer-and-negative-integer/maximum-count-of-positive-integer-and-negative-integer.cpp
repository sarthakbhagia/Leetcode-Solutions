class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int low=0;
        int high = nums.size()-1;
        int pos=0;
        int neg=0;

        while(low<=high){
            int mid = low + (high-low)/2;
            int target=0;

            if(nums[mid]<target){
                neg = mid+1;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        low = 0;
        high = nums.size() - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int target=0;

            if(nums[mid]>target){
                pos = nums.size()-mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return max(pos,neg);
    }
};