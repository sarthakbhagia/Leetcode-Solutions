class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i=0;i<stones.length();i++){
            if(jewels.contains(stones[i])){
                count++;
            }
        }
        return count;
    }
};