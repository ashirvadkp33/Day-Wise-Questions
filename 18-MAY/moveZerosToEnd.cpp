//https://leetcode.com/problems/move-zeroes/description/
void moveZeroes(vector<int>& nums) {
        int n=nums.size();
       int cnt0=0;
        vector<int>k;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            cnt0++;
            else
            k.push_back(nums[i]);
        }

        for(int i=0;i<k.size();i++){
            nums[i]=k[i];
        }
        for(int i=k.size();i<n;i++)
        {
            nums[i]=0;
        }

    }
