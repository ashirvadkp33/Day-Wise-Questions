//https://leetcode.com/problems/majority-element/description/
//Brute force -> use two lopps , count no. of each
//Better - Hash Map , time =O(nlogn) , Space O(n)
//Optimized -> using moore voting algo

//consider current element to be majority , maintiain count of it , if other element comes count -1 , if count reduce to zero , start fresh from current element to be majority
//if at last count is not zero , check no. of occurence of that elemnt .. if>n/2 then majority

//time O(n) Space O(1)

int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele;
        int count=0;

        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count++;
                ele=nums[i];
            }
            else if(nums[i]==ele)
            {
                count++;
            }
            else
            count--;
        }
    int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(ele==nums[i])
                cnt1++;
        }

        if(cnt1>n/2)
        return ele;
        else 
        return -1;

    }
