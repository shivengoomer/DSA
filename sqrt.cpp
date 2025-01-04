class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return x;
        }
        int result=1;
        int i=1;
            while(i<=x/i){
                result=i;
                i++;
            }
        return result;
        }
};