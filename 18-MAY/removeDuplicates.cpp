//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//brute force

//with extra space
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int i=0,j=i+1;
        vector<int>k;
        while(i<n)
        {
            k.push_back(nums[i]);
            while(j<n && nums[i]==nums[j])
            {
                j++;

            }
            i=j;
            j++;

        }

        int m=k.size();

        for(int i=0;i<m;i++)
        {
            nums[i]=k[i];
        }

        return m;
    }

//optimal O(n)time ans O(1) space
//https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_1102307?leftPanelTab=1
//without extra space 
int removeDuplicates(vector<int> &nums, int n) {
	    
        // int ans=0;
        // int i=0,j=i+1,x=0;
        // //vector<int>k;
        // while(i<n)
        // {
        //     nums[x]=nums[i];
		// 	x++;
        //     while(j<n && nums[i]==nums[j])
        //     {
        //         j++;

        //     }
        //     i=j;
        //     j++;

        // }

		int i=0;

		for(int j=1;j<n;j++)
		{
			if(nums[i]!=nums[j])
			{
				nums[i+1]=nums[j];
				i++;
			}
		}

        

        
        return i+1;
}
