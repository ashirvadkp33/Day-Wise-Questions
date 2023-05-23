//https://leetcode.com/problems/majority-element/description/
//Time O(n) space O(n)

int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int ans=nums[0];
        int maxi=mp[nums[0]];

        for(int i=1;i<n;i++)
        {
            if(maxi<mp[nums[i]])
            ans=nums[i];
        }

        return ans;
    }

//Better Approach 
//Time O(n) Space O(1)
