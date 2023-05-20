//https://leetcode.com/problems/maximum-subarray/submissions/953973927/
//Brute force - using two loops
//time O(n^2) space O(1)

int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {   sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }

//Better - kadane algo 
//Time O(n) space O(n)

int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int sum=0;
        if(n==1)
        return nums[0];
        vector<int>dp(n,0);

        dp[0]=nums[0];

        for(int i=1;i<n;i++)
        {
            dp[i]=max((nums[i]+dp[i-1]),nums[i]);
            maxi=max(dp[i],maxi);
        }        
        
        return maxi;
    }

//optimal -Kadane Algo ->without extra space
//https://www.codingninjas.com/codestudio/problems/maximum-subarray-sum_630526?leftPanelTab=1
//time - O(n) space O(1)

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long maxi=LONG_MIN;
    long long sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        maxi=max(maxi,sum);

        if(sum<0)
        sum=0;
    }
    
    if(maxi<0)
    maxi=0;
    
    return maxi;
}
