//https://leetcode.com/problems/longest-consecutive-sequence/description/
//Approach 1 ->using sorting 
//Time O(nlogn) Space O(1)

int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        
        int ans=1,maxi=1;
        if(n==0)
        return 0;
        
        if(n==1)
        return 1;
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==(nums[j]+1))
            {
                maxi++;
                ans=max(ans,maxi);
                j+=1;
            }
            else if(nums[i]==nums[j])
            {
                j=i;
                
            }
            else{
                ans=max(ans,maxi);
                maxi=1;
                j=i;
            }
        }
        
        return ans;
    }

//Optimal ->using onordered set
//Time O(n)

int longestConsecutive(vector<int>& nums) {
        int n=nums.size();

        if(n==0)
        return 0;

        if(n==1)
        return 1;

        unordered_set<int>st;
        int longest=1;
        int cnt=1;

        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }

        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end())
                {
                    cnt++;
                    x++;
                }

                longest=max(longest,cnt);
            }
        }
        return longest;

    }
