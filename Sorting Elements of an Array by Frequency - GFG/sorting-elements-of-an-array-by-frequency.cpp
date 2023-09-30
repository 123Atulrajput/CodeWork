
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
#include <bits/stdc++.h>
using namespace std;


vector<int>Sortbyfreq( int arr[],int n){
    vector<int>v;
    unordered_map<int ,int>mp;
    priority_queue<pair<int , int >>pq;
    
    for( int i = 0 ; i<n ; i++){
        mp[arr[i]]++;
        
    }
   
    for(auto it : mp){
            pq.push({it.second, -1*(it.first)}); 
    }
            
    while(!pq.empty()){
        int freq=pq.top().first;
        int element=pq.top().second;
        while(freq>0){
            v.push_back(-1*element);
            freq--;
        }
        pq.pop();
    }
    return v;
}
int main()
 {
	//code
	int t ; 
	cin >>t;
	while(t--){
	    int n ;
	    cin>>n;
	    int arr[n];
	    for(int i =0;i<n;i++){
	        cin>>arr[i];
	    }
	    vector<int >V=Sortbyfreq(arr,n);
	    for(int i=0;i<n;i++){
	        cout<<V[i]<<" ";
	        
	    }
	    cout<<endl;
	}
	return 0;
}