class Solution {
public:
    int strStr(string haystack, string needle) {
        string temp;
        int out=-1;
        if(needle.size()>haystack.size()){
            goto end;
        }
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            for (int j = i; j < i + needle.size(); j++) {
            temp += haystack[j]; 
        }
            if (temp == needle) { 
            out = i;
            break; 
            }
        temp = ""; 
        
            
        }
        end:
        return out;
    }
};