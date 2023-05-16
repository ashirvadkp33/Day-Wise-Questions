//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
void sort012(int a[], int n)
    {
        // code here 
        int count0=0,count1=0,count2=0;
        
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
