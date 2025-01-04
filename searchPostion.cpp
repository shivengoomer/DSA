class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len=nums.size();
        int out=len;
        for (int i = 0; i <len; i++)
        {
            if(nums[i]==target)
            {out=i;
            break;
            }
            if(target>len){
                    out=len;
                }
            if (i+1==len){
                for (int j = 0; j < len; j++)
                {if (nums[j]>target)
                    {out=j;
                    break;}}
                
                
            }
        }
        return out;
    }
};