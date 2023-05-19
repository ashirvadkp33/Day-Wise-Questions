//https://www.codingninjas.com/codestudio/problems/sorted-array_6613259?leftPanelTab=0


//optimised solution
//time O(n+m) , space O(n+m)

vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n=a.size();
    int m=b.size();
    
    int i=0,j=0,x=0;
    vector<int>ans;
    if(a[i]<b[j])
    {
      ans.push_back(a[i]);
      i++;
    }
    else{
      ans.push_back(b[j]);
      j++;
    }
    
    while(i<n && j<m)
    {
      if(a[i]<b[j])
      {
        if (a[i] != ans[x]) {
          ans.push_back(a[i]);
          x++;
        }
        i++;
        
      }
      else if(a[i]>b[j])
      {
        if (b[j] != ans[x]) {
          ans.push_back(b[j]);
          x++;
        }
        j++;
        
      } else 
      {
        if (a[i] != ans[x]) {
          ans.push_back(a[i]);
          x++;
        }
        i++;
        j++;
        
      }
    }
    
    while(i<n)
    {
      if (a[i] != ans[x]) {
        ans.push_back(a[i]);
        x++;
      }
        i++;
       
    }

    while(j<m)
    {
      if (b[j] != ans[x]) {
        ans.push_back(b[j]);
        x++;
      }
        j++;
       
    }

    return ans;
    
}

//Brute force solution using set 
//time nlogn space n+m

#include<bits/stdc++.h>>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int>ans;
    int i=0,j=0,x=0;
    int n=a.size();
    int m=b.size();
    set<int>st;
    while(i<n && j<m)
    {   
       if(a[i]==b[j])
       {
         st.insert(a[i]);
         i++;
         j++;
       }
       else if(a[i]<b[j])
       {
         st.insert(a[i]);
         i++;
       }
       else{
         st.insert(b[j]);
         j++;
       }
    }

    while(j<m)
    {   
        st.insert(b[j]);
        j++;
    }

    while(i<n)
    {
      st.insert(a[i]);
      i++;
    }

    for(auto it:st)
    {
      ans.push_back(it);
    }

    return ans;
}
