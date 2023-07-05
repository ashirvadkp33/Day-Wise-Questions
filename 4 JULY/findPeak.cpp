//https://leetcode.com/problems/find-peak-element/description/

int findPeakElement(vector<int>& nums) {
        int n=nums.size();

        if(n==1)
        return 0;

        if(nums[0]>nums[1])
        return 0;

        if(nums[n-1]>nums[n-2])
        return n-1;

        int low=1,high=n-2;

        while(low<=high)
        {
            int mid=(low+high)/2;

            if(nums[mid]>nums[mid-1]  && nums[mid]>nums[mid+1])
            return mid;
            else if(nums[mid]>nums[mid-1])
            {
                //peak on growing phase
                low=mid+1;
            }
            else if(nums[mid]>nums[mid+1])
            {
                //peak on shrinking phase
                high=mid-1;
            }
            else{
                //mid on dip , so move any side you will get peak
                low=mid+1;
            }
        }

        return -1;

    }
