//https://leetcode.com/problems/sort-colors/submissions/954329199/
//Time - O(n)  space O(1)
void sortColors(vector<int>& a) {
        int count0=0,count1=0,count2=0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            count0++;
            
            if(a[i]==1)
            count1++;
            
            if(a[i]==2)
            count2++;
            
        }
        int i=0;
        while(count0)
        {
            a[i]=0;
            i++;
            count0--;
        }
        
        while(count1)
        {
            a[i]=1;
            i++;
            count1--;
        }
        
        while(count2)
        {
            a[i]=2;
            i++;
            count2--;
        }
    }
