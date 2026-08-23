class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        int temp=0;
        int c_space=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                s1+=s[i];
            }
            else{
                c_space+=1;
                s1+=" ";
                if(c_space==k){
                    break;
                }
            }
        }
        if(s1[s1.length()-1]==' '){
            s1.erase(s1.length()-1,1);
        }
        return s1;
    }
};