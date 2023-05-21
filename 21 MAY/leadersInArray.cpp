//https://www.codingninjas.com/codestudio/problems/superior-elements_6783446?leftPanelTab=0
//Time O(n) space O(n)

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int>ans;
    int n=a.size();

    int maxi=a[n-1];
    ans.push_back(a[n-1]);

    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>maxi )
        {
            ans.push_back(a[i]);
            maxi=a[i];
        }
    }

   
    return ans;
}
