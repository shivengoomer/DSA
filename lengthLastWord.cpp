class Solution {
public:
    int lengthOfLastWord(string s) {
        int out=0;
        int temp=-1;
        int len=s.size();
        for (int i = len - 1; i >= 0; i--) { 
            if (s[i]==' ')
                {
                    temp--;
                    cout<<s[i]<<endl;
                }
            if (s[i] != ' ') { 
                if (i == 0 || s[i - 1] == ' ') { 
                    out = len + temp+1-i;
                    break;
                }
            }
        }
        return out;
    }
};