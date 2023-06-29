//https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1
//UB is frist index in array which is greater than given index

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int ans=n;
	int low=0,high=n-1;

	while(low<=high)
	{
		int mid=(low+high)/2;

		if(arr[mid]>x)
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
