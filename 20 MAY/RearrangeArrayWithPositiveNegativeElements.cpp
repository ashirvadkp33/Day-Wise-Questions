//https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/953690378/
//Brute force - take extra array , store positive negative separately then push
//Time - O(n)+O(n) Space - O(n)

vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos,neg;

        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            neg.push_back(nums[i]);
            else
            pos.push_back(nums[i]);
        }
        int x=0,i=0,y=0;

        while(i<n)
        {
            if(i%2==0)
            {
                nums[i]=pos[x];
                x++;
            }
            else
            {
                nums[i]=neg[y];
                y++;
            }
            i++;
        }

        return nums;
    }

//Better Approach - in one pass 

vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int pos=0,neg=1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pos]=nums[i];
                pos+=2;
            }
            else{
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
        
    }

