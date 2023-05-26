//https://leetcode.com/problems/majority-element/submissions/957510047/
//Brute force ->use 2 for loops
//Better using hash map

vector<int> majorityElement(vector<int>& nums) {
       
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it:mp)
        {
            if(it.second>floor(n/3))
            {
                ans.push_back(it.first);
            }
        }

        return ans;
    }

//optimised ->using moore voting algo
//Time O(n) SPace O(1)
vector<int> majorityElement(vector<int>& nums) {
        //max 2 element possible as >n/3
        int n=nums.size();
        int cnt1=0,cnt2=0;
        int ele1=INT_MIN;
        int ele2=INT_MIN;

        for(int i=0;i<n;i++)
        {
            if(cnt1==0 && ele2!=nums[i])
            {
                cnt1=1;
                ele1=nums[i];
            }
            else if(cnt2==0 && ele1!=nums[i])
            {
                cnt2++;
                ele2=nums[i];
            }
            else if(nums[i]==ele1)
            cnt1++;
            else if(nums[i]==ele2)
            cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1=0;
        cnt2=0;
        vector<int>ans;
        int x=floor(n/3)+1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==ele1)
            cnt1++;
            else if(nums[i]==ele2)
            cnt2++;


        }

        if(cnt1>=x)
        ans.push_back(ele1);

        if(cnt2>=x)
        ans.push_back(ele2);

        return ans;

    }
