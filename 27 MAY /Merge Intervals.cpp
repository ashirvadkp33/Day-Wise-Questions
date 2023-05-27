//https://leetcode.com/problems/merge-intervals/description/

//method 1
#include <algorithm>
class Solution {
public:

   static bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}  

    vector<vector<int>> merge(vector<vector<int>>& x) {
        int n=x.size();
        
        vector<vector<int>>ans;
        int flag;
       std::sort(x.begin(),x.end(),sortcol);
        int el1=x[0][0];
        int el2=x[0][1];
        // std::sort(x.begin(), x.end(), [](const vector<int> & a, const vector<int> & b){ return a.size() < b.size(); }); 


         for(int i=0;i<n;i++)
         {
             cout<<x[i][0]<<" "<<x[i][1]<<endl;
         }   
        for(int i=1;i<n;i++) 
        {
            //vector<int>k;

            if(x[i][0]>el2)
            {
                ans.push_back({el1,el2});
                el1=x[i][0];
                el2=x[i][1];
                flag=1;
                cout<<"Hi3"<<endl;
            }
            else if(x[i][0]<=el2)
            {   
                if(x[i][1]<el2 && x[i][0]<el1 && x[i][1]<el1)
                {
                    ans.push_back({x[i][0],x[i][1]});
                    cout<<"Hi1"<<endl;
                }
                else{
                el2=max(el2,x[i][1]);
                el1=min(x[i][0],el1);
                flag=0;
                cout<<"Hi2"<<el1<<" "<<el2<<" "<<endl;
                }
            }
        }

        
            ans.push_back({el1,el2});
       
        return ans;
    }
};

//Method 2

#include<vector>
#include<bits/stdc++.h>
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &q){
	 sort(q.begin(),q.end());
        
        int n=q.size();
        int m=q[0].size();
        stack<pair<int,int>>st;
        vector<vector<int>>ans;
         int temp;
        st.push({q[0][0],q[0][1]});
       // pair<int,int>p;
        
        for(int i=1;i<n;i++){
            pair<int,int>p=st.top();
            int a=p.first;
            int b=p.second;
            
            if(b<q[i][0]){
                ans.push_back({a,b});
                st.pop();
                //if(i+1!=n)
                st.push({q[i][0],q[i][1]});
                
            }else{
                //cout<<"HI";
                st.pop();
                if(q[i][1]>b)
                st.push({a,q[i][1]});
                else
                    st.push({a,b});
            }
                
        }
        if(!st.empty()){
            int a=st.top().first;
            int b=st.top().second;
            
            ans.push_back({a,b});
        }
        //ans.push_back(st.top());
        return ans;
	
}

//Optimised
//Time nlogn Space n


vector<vector<int>> merge(vector<vector<int>>& x) {
        sort(x.begin(),x.end());
        vector<vector<int>>ans;
        int n=x.size();

        for(int i=0;i<n;i++)
        {
            if(ans.empty() || ans.back()[1]<x[i][0])
            {
                ans.push_back(x[i]);
            }
            else{
                ans.back()[1]=max(x[i][1],ans.back()[1]);
            }
        }

        return ans;
    }
