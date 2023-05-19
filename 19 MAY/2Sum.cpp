//https://leetcode.com/problems/two-sum/submissions/953360598/
//Brute force 
//Time O(n^2) , space O(1)

vector<int> twoSum(vector<int>& nums, int target) {
        int ind1,ind2;
        int n=nums.size();
        int flag;
        for(int i=0;i<n-1;i++)
        {
            int x=target-nums[i];
            ind1=i;
            flag=0;
            for(int j=i+1;j<n;j++)
            {
                if(nums[j]==x)
                {
                    flag=1;
                    ind2=j;
                    break;
                }
            }
            if(flag==1)
            break;
        }

        return {ind1,ind2};
    }

//Better approach
//Time O(nlogn) space O(N)

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;
        int ind1,ind2;
        for(int i=0;i<n;i++)
        {
            int x=target-nums[i];

            if(mp.find(x)!=mp.end())
            {
                ind1=i;
                ind2=mp[x];
                break;
            }
            else
            {
                mp.insert({nums[i],i});
            }
        }

        return {ind1,ind2};
    }

//Optimal solution
//For type 1 , sort and use two pinters
//Time  O(nlogn) space O(1)
//https://www.codingninjas.com/codestudio/problems/reading_6845742?leftPanelTab=1
//for variety one where we have to return index use above approach
string read(int n, vector<int> book, int target)
{
    int i=0,j=n-1;
    sort(book.begin(),book.end());
    while(i<=j)
    {    int sum=book[i]+book[j];
    
        if(sum==target)
        return "YES";
        else if(sum>target)
        {
            j--;
            
        }
        else
        i++;
    }
    return "NO";
}
