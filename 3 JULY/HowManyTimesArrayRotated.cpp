//https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1
m1
//return index of mid
int findKRotation(vector<int> &nums){
    // Write your code here.   
      int n=nums.size();

        int low=0,high=n-1;
        int mid;
        while(low<=high)
        {
             mid=(low+high)/2;

            
            if(mid!=0 && nums[mid]<nums[mid-1])
            {
                break;
            }


            if(nums[mid]<nums[high])
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return mid;

}

M2

#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
     int n=arr.size();

  int low=0,high=n-1;
  int ans=INT_MAX;
  int index=-1;

  while(low<=high)
  {
    int mid=(low+high)/2;

    //if already sorted
    if(arr[low]<=arr[high])
    {
        if(ans>arr[low])
        index=low;
      ans=min(ans,arr[low]);
      break;
    }
    //if left sorted
    if(arr[low]<=arr[mid])
    {
        if(ans>arr[low])
        index=low;
      ans=min(arr[low],ans);
      low=mid+1;
    }
    else{
      //if right sorted
      if(ans>arr[mid])
      index=mid;
      ans=min(ans,arr[mid]);
      high=mid-1;
    }
  }
  return index;
}
