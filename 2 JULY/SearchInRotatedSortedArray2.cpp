//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

bool search(vector<int>& nums, int target) {
      
        int n=nums.size();
        int low=0,high=n-1,ans=-1;

        while(low<=high)
        {
            int mid=(low+high)/2;

            if(nums[mid]==target)
            {
                ans=mid;
                break;
            }
            //trim down the search space
            if((nums[low]==nums[mid])&&(nums[mid]==nums[high]))
            {
                low=low+1;
                high=high-1;
                continue;
            }
            //left half sorted
             if(nums[mid]>=nums[low])
            {
               if(target>=nums[low] && target<=nums[mid])
               {
                   high=mid-1;
               }
               else
               low=mid+1;
            }
            else 
            {   //right half sorted
                 if(target>=nums[mid] && target<=nums[high])
               {
                   low=mid+1;
               }
               else 
                   high=mid-1;
                
            }
           
        }


        return ans!=-1;
   
    }
