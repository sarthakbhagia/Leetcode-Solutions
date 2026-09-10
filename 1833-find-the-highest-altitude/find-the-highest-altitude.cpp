class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> temp = {0};
        for(int i=0; i<gain.size(); i++){
            temp.push_back(temp.back() + gain[i]);
        }
        sort(temp.begin(),temp.end());
        return temp[temp.size()-1];
    }
};