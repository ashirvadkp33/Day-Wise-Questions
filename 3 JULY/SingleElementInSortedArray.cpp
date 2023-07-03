//https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        if(n==1)
        return nums[0];

        if(nums[0]!=nums[1])
        return nums[0];

        if(nums[n-1]!=nums[n-2])
        return nums[n-1];

        int low=0,high=n-1;

        while(low<=high)
        {
            int mid=(low+high)/2;

            //check if single element

            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])
            return nums[mid];

            if(((mid%2==1)&&nums[mid-1]==nums[mid])||((mid%2==0)&&nums[mid+1]==nums[mid]))
            {low=mid+1;
            //eliminate left half
            }
            else
            {
                high=mid-1;
                //eliminate right half
            }

        }
        return -1;
    }
};
