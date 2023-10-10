//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int ans=0, sum=0;
    	for(int i=0;i<str.size();i++){
    	    
    	    if(str[i]>='0'&&str[i]<='9'){
    	   ans=ans*10+(str[i]-'0');
    	    }
    	    else{
    	        sum=sum +ans;
    	        ans=0;
    	    }
    	   
    	}
    	return ans + sum;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends