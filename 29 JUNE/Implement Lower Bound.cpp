//https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int ans=n;
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
	return ans;
}
