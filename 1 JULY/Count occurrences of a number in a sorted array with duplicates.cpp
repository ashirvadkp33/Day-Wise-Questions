//https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1


int lowerBound(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    int ans=n;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>=k)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int upperBound(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    int ans=n;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]>k)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}


int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	return upperBound(arr,n,x)-lowerBound(arr,n,x);
}
