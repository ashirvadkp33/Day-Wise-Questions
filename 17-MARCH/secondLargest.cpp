//https://www.codingninjas.com/codestudio/problems/ninja-and-the-second-order-elements_6581960?leftPanelTab=1

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int>ans;
    int maxi=INT_MIN,mini=INT_MAX,maxi2=INT_MIN,mini2=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(maxi<a[i])
        maxi=a[i];

        if(mini>a[i])
        mini=a[i];
    }

    for(int i=0;i<n;i++)
    {   if(a[i]==maxi)
        continue;

        if(a[i]==mini)
        continue;

        if(maxi2<a[i])
        maxi2=a[i];

        if(mini2>a[i])
        mini2=a[i];
    }
   // cout<<maxi<<" "<<maxi2<<" "<<mini<<" "<<mini2<<endl;
    ans.push_back(maxi2);
    ans.push_back(mini2);

    return ans;
}
