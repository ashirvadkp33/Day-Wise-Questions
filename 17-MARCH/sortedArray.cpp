//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

 bool check(vector<int>& nums) {
        int flag=0;
        int n=nums.size();

        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {flag++;
            }
        }

        if(flag==0)
        return true;
        else if(flag>=2)
        return false;
        else if(flag!=0 && nums[0]<nums[n-1])
        return false;
        else
        return true;
    }
