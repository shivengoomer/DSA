class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string temp(s.size(), ' '); 
        for (int i = 0; i < indices.size(); i++) {
            temp[indices[i]] = s[i];
        }
        return temp; 
    }
};


