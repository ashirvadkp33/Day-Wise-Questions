//https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0
#include <bits/stdc++.h> 

int lowerBound(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    int ans=n;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>=k)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int upperBound(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    int ans=n;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>k)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
   // pair<int,int>ans;
    int x=lowerBound(arr,n,k);
    if(x==n || arr[x]!=k)
    return {-1,-1};

    return {x,(upperBound(arr,n,k)-1)};

}
