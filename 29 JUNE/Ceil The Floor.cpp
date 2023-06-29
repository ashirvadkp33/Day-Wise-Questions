//https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401

int giveFloor(int arr[],int n,int x)
{
    int low=0,high=n-1;
    
    int ans=-1;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(arr[mid]<=x)
        {
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;;
        }
    }
    
    if(ans!=-1)
	ans=arr[ans];
	
    return ans;
}

int giveCeil(int arr[],int n,int x)
{
  
	int ans=-1;
	int low=0,high=n-1;

	while(low<=high)
	{
		int mid=(low+high)/2;

		if(arr[mid]>=x)
		{ //maybe an answer
			ans=mid;
			high=mid-1;
		}
		else{
			//not an answer
			low=mid+1;
		}
	}
	if(ans!=-1)
	ans=arr[ans];
	return ans;

}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    pair<int,int>ans={-1,-1};
    
   ans.first=giveFloor(arr,n,x);
    ans.second=giveCeil(arr,n,x);
    return ans;
}


