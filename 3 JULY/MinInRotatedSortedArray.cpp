//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/984966369/

//M1 
int findMin(vector<int>& arr)
{
	// Write your code here.
	int n=arr.size();

	int low=0,high=n-1;
	int ans=INT_MAX;

	while(low<=high)
	{
		int mid=(low+high)/2;

		//if already sorted
		if(arr[low]<=arr[high])
		{
			ans=min(ans,arr[low]);
			break;
		}
		//if left sorted
		if(arr[low]<=arr[mid])
		{
			ans=min(arr[low],ans);
			low=mid+1;
		}
		else{
			//if right sorted
			ans=min(ans,arr[mid]);
			high=mid-1;
		}
	}
	return ans;
}

//M2
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();

        int low=0,high=n-1;
        int mid;
        while(low<=high)
        {
             mid=(low+high)/2;

            
            if(mid!=0 && nums[mid]<nums[mid-1])
            {
                break;
            }


            if(nums[mid]<nums[high])
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return nums[mid];
    }
};
