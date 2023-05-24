//https://leetcode.com/problems/3sum/submissions/
vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        if(n<3)
            return ans;
        
        for(int i=0;i<n-2;i++){
            int a=nums[i];
            if(i>0 && nums[i]==nums[i-1])
                continue;
            else{
                int j=i+1,k=n-1;
                
                while(j<k){
                    
                    int sum=a+nums[j]+nums[k];
                    
                  
                 if((a+nums[j]+nums[k])==0)
                    {
                        vector<int>x;
                        x.push_back(a);
                        x.push_back(nums[j]);
                        x.push_back(nums[k]);
                        ans.push_back(x);
                        k--;
                        j++;
                     while(nums[j]==nums[j-1] && j<k)
                        j++;
                    }
                    else if(sum<0)
                    {
                        j++;
                    }
                    else if(sum>0)
                        k--;
                   
                   
                }
            }
        }
       return ans; 
    }
