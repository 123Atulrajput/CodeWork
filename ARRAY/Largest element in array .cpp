//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max=arr[0];
        int i;
        for(i=0;i<n-1;i++){
            if(max<arr[i+1]){
            max=arr[i+1];
            }
        }
        return max;
    }
};
