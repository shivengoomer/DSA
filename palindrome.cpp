class Solution {
public:
    bool isPalindrome(int x) {
        bool result=true;
        string sx=to_string(x);
        for (int i = 0; i < sx.size()/2; i++)
        {
            if(sx[i-0]!=sx[sx.size() - 1 - i]){
                result=false;
            }  
        }
        return result;
    }
};