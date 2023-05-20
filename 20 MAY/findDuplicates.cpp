//https://leetcode.com/problems/find-the-duplicate-number/submissions/
//Brute force -> sort array , check duplicates at cont.

//Better - using hashing , freq array
 int findDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        int p=n+1;
        int visi[p];
        
         for(int i=0;i<p;i++){
            visi[i]=0;
        }
        
        for(int i=0;i<n;i++){
            visi[nums[i]]++;
        }
        int k;
        
        for(int i=1;i<=n;i++){
            if(visi[i]>1)
                k=i;
        }
        return k;
    }

//Optimal - using slow fast pointer
//time O(n) space O(1)
int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int slow=nums[0],fast=nums[0];

        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);

        fast=nums[0];

        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;
    }
