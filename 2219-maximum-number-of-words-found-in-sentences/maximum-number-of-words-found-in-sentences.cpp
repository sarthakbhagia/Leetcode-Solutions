class Solution {
public:
    int mostWordsFound(vector<string>& sentences){
        int maxWords = 0;
        
        for(int i = 0; i < sentences.size(); i++){
            int spaces = 0;
            for(int j = 0; j < sentences[i].length(); j++){
                if(sentences[i][j] == ' '){
                    spaces++;
                }
            }
            int currentWords = spaces + 1;
            
            maxWords = max(maxWords, currentWords);
        }
        
        return maxWords;
    }
};