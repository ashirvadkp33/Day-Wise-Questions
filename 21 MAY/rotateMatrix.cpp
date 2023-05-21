//https://leetcode.com/problems/rotate-image/submissions/954361196/
//Time O(n^2) space O(1)

 void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i!=j)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }

        int i=0,j=m-1;

        while(i<j)
        {
            for(int x=0;x<n;x++)
            {
                swap(matrix[x][i],matrix[x][j]);
            }
            i++;
            j--;
        }

    }
