class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp;
        string rev;
        for(int i=word.find(ch)+1;i<word.length();i++){
            temp.push_back(word[i]);
        }
        for(int i=word.find(ch);i>=0;i--){
            rev.push_back(word[i]);
        }
        return rev.append(temp);
    }
};