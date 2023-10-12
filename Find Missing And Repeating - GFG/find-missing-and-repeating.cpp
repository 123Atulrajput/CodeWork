//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int repeating=-1;int missing =-1;
       int hash[n+1]={0};
       for(int i=0;i<n;i++){
           hash[arr[i]]++;
       }
       
       for(int i=1;i<=n;i++){
           if(hash[i]==2){
           repeating =i;}
           if(hash[i]==0){
           missing =i;}
       }
            
        
        
        return {repeating, missing};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends