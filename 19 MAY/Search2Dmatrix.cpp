//https://leetcode.com/problems/search-a-2d-matrix/submissions/953449710/
//Time 0(log(n+m)) space O(1)

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();

        int i=0,j=n-1;
        int mid;

        if(n==1 && m==1)
        {
            if(matrix[0][0]==target)
            return true;
            else
            return false;
        }
        while(i<=j)
        {   
            

           mid= i+(j-i)/2;
            //cout<<mid<<endl;
            if(n==1)
            {
                mid=0;
                break;
            }

            if(matrix[mid][0]>target)
            {   
                //cout<<"Hi"<<endl;
                j=mid-1;
            }
            else if(matrix[mid][0]<target)
            {   
                 
                if(matrix[mid][m-1]>target)
               {   //cout<<"Bye"<<endl;
                   break;
               }
                else if(matrix[mid][m-1]==target)
                return true;
                else
               { 
                 
                   i=mid+1;
                   //cout<<"kk"<<" "<<i<<" "<<j<<endl;
               }
            }
            else 
            return true;
        }

        i=0,j=m-1;
        int x=mid;

       // cout<<x<<" "<<m-1<<endl;
        while(i<=j)
        {   

            mid=i+(j-i)/2;

            if(matrix[x][mid]==target)
            return true;
            else if(matrix[x][mid]>target)
            {
                j=mid-1;
            }
            else
            i=mid+1;
        }

        return false;
    }
