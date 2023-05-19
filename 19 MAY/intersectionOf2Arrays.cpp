//https://leetcode.com/problems/intersection-of-two-arrays/description/
//Brute force 
//Array a;ready sprted
//Time O(n log n) space O(n+m)

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        
        set<int>st;
        int i=0,j=0;
        int n=nums1.size(),m=nums2.size();

        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j])
            {
                st.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else
            j++;
        }

        for(auto it:st)
        {
            ans.push_back(it);
        }
        return ans;

    }

//OPtimal solution
//Time O(n+m), space O(n+m)
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	//int n=arr1.size();
	//int m=arr2.size();
	vector<int>ans;

	int i=0,j=0;

	while(i<n && j<m)
	{
		if(arr1[i]==arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
		}
		else
		i++;
	}
	return ans;
}
