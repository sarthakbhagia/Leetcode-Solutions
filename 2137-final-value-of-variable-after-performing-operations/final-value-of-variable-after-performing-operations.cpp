class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int dec=0;
        int inc=0;
        int X=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="--X" || operations[i]=="X--"){
                dec+=1;
            }
            else{
                inc+=1;
            }
        }
        return inc-dec;
    }
};