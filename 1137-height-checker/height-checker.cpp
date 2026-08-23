class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        for(int i=0;i<expected.size();i++){
            for(int j=0;j<expected.size()-1-i;j++){
                if(expected[j]>expected[j+1]){
                    swap(expected[j],expected[j+1]);
                }
            }
        }
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i]){
                count++;
            }
        }
        return count;
    }
};