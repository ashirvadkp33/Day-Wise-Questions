//https://www.codingninjas.com/codestudio/problems/linear-search_6922070?leftPanelTab=1

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
    int ans=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            ans=i;
            break;
        }
    }
    return ans;
}
