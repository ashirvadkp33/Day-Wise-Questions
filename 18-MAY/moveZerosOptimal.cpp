//https://leetcode.com/problems/move-zeroes/submissions/952494207/

 void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                j=i;
                break;
            }
        }

        if(n==1 || j==-1)
        return;

        for(int i=j+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
