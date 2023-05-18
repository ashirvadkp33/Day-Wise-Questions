//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1?page=1&difficulty[]=0&status[]=unsolved&category[]=Arrays&sortBy=submissions

void reverse(int arr[],int n)
    {
        int i=0,j=n-1;
        
        while(i<=j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    
    void rotateArr(int arr[], int d, int n){
        // code here
        if(d>n)
        {   
            d=(d-n)%n;
        }
         reverse(arr,d);
         reverse(arr+d,n-d);
         reverse(arr,n);
    }
