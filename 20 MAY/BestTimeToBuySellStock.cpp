//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
//Brute force
//Time O<n^2> space O(1)

int maxProfit(vector<int>& p) {
        int n=p.size();
        int maxP=0;
        int buy=0,sell=0;

        for(int i=0;i<n-1;i++)
        {
            buy=p[i];
            for(int j=i+1;j<n;j++)
            {
                int x=p[j]-buy;
                if(x>maxP)
                maxP=x;
            }
           // cout<<maxP<<endl;
        }

        return maxP;
    }

//Better spproach
//DP approach
//Time O(n) space O(1)

 int maxProfit(vector<int>& p) {
        int n=p.size();
        int maxi=0,mini=p[0],cost=0;

        for(int i=1;i<n;i++)
        {
            cost=p[i]-mini;
            maxi=max(maxi,cost);
            mini=min(mini,p[i]);
        }

        return maxi;


    }
