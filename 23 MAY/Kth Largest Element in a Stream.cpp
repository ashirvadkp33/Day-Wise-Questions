//https://leetcode.com/problems/kth-largest-element-in-a-stream/submissions/955531020/

class KthLargest {
public:
    int num;
    vector<int>arr;
    KthLargest(int k, vector<int>& nums) {
        num=k;
        sort(nums.begin(),nums.end());
       arr=nums;
    }
    
    int add(int val) {
        //int ans;
        //arr.push_back(val);
        int n=arr.size();

        for(int i=0;i<n;i++)
        {
            if(val<=arr[i])
            {
                arr.insert(arr.begin()+i,val);
                break;
            }
        }
        n++;

        if(arr.size()<n)
        {
            arr.push_back(val);
        }

        
        return arr[n-num];


    }
};
