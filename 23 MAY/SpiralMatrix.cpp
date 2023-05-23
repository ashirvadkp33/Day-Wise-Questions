//https://leetcode.com/problems/spiral-matrix/description/
//Time O(n^2) space O(n^2)

vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int x=0,y=0;
        vector<int>ans;
        vector<vector<int>>visi(n , vector<int> (m, 0));
        if(n==1)
        {
            for(int i=0;i<m;i++)
            {
                ans.push_back(mat[0][i]);
            }
            return ans;
        }

        if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                ans.push_back(mat[i][0]);
            }
            return ans;
        }
        //cout<<n<<" "<<n/2<<" "<<ceil(float(n/(2+0.0)))<<endl;
        while(x<ceil(float(n/(2+0.0))) &&  y<ceil(float(m/(2+0.0))))
        {
            for(int i=x;i<=m-1-x;i++)
            {   if(visi[x][i]==0){
                ans.push_back(mat[x][i]);
                visi[x][i]=1;
                }
            }

            for(int j=x+1;j<=n-1-x;j++)
            {   
                if(visi[j][m-1-x]==0){
                ans.push_back(mat[j][m-1-x]);
                visi[j][m-1-x]=1;
                }

            }

            for(int i=m-2-x;i>x;i--)
            {
                if(visi[n-1-x][i]==0){
                ans.push_back(mat[n-1-x][i]);
                visi[n-1-x][i]=1;
                }
            }

            for(int j=n-1-x;j>x;j--)
            {
                if(visi[j][x]==0){
                ans.push_back(mat[j][x]);
                visi[j][x]=1;
                }
            }

            x++;
            y++;
        }

        return ans;
    }

