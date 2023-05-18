//https://leetcode.com/problems/missing-number/description/

int missingNumber(vector<int>& nums) {
     //sum solution
     
        int n=nums.size();

        // int sum=(n)*(n+1)/2;
        // int temp=0;

        // for(int i=0;i<n;i++)
        // {
        //     temp+=nums[i];
        // }
        // return sum-temp;

        //xor solution

        int xor1=0,xor2=0,xor3;

        for(int i=1;i<=n;i++)
        {
            xor1=xor1^i;
        }

        for(int i=0;i<n;i++)
        {
            xor2=xor2^nums[i];
        }

        xor3=xor1^xor2;

        return xor3;
    }
