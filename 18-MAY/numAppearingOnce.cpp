//https://leetcode.com/problems/single-number/submissions/

int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;

        }
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==1)
            {
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
