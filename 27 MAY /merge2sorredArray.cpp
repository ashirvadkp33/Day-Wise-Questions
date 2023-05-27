//https://leetcode.com/problems/merge-sorted-array/submissions/958309712/
//Brute force 
//Using extra array
//Time O(m+n)  space O(m+n)

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp;
        int i=0,j=0,k=0;

        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                temp.push_back(nums1[i]);
                i++;
                
            }
            else if(nums1[i]==nums2[j])
            {
                temp.push_back(nums1[i]);
                temp.push_back(nums1[i]);
                i++;
                j++;
               
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m)
        {
             temp.push_back(nums1[i]);
                i++;
        }

        while(j<n)
        {
             temp.push_back(nums2[j]);
                j++;
        }

        for(int i=0;i<n+m;i++)
        {
            nums1[i]=temp[i];
        }
    

       
    }   

//Approach 2
//Using 2 pointers , one from last , one from start , swap if a[i]>b[j]
//Then sort
//Time O(nlogn+mlogm +n+m) space O(1)
//https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays-without-extra-space_6898839?leftPanelTab=1

#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
    int n=a.size();
    int m=b.size();

    int i=n-1,j=0;

    while(a[i]>b[j])
    {
        swap(a[i],b[j]);
        i--;
        j++;
    }
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
	
}

//Optimal

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
    int n=a.size();
    int m=b.size();
    int len=n+m;
    int gap=(len/2)+(len%2);
    
    while(gap>0)
    {
        int left=0;
        int right=left+gap;

        while(right<len)
        {
            if(left<n && right>=n)
            {
                //in arr1, arr2
                if(a[left]>b[right-n])
                swap(a[left],b[right-n]);
            }
            else if(left>=n )
            {
                //in arr2,arr2
                if(b[left-n]>b[right-n]);
                swap(b[left-n],b[right-n]);
            } else {
              // in arr1 arr1

              if (a[left] > a[right])
                swap(a[left], a[right]);
            }
            left++;
            right++;
        }
        if(gap==1)
        {
            break;
        }
        gap=(gap/2)+(gap%2);
        
    }
    
	
}
