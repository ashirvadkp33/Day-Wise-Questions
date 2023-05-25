//https://leetcode.com/problems/merge-intervals/
vector<vector<int>> merge(vector<vector<int>>& q) {
        
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
