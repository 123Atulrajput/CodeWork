#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

vector<int> sortByFreq(int arr[],int n)
   {
       //Your code here
       vector<int>v;
        unordered_map<int , int>mp;
       priority_queue<pair<int , int>>maxh;
       
       for(int i = 0 ; i<n ; i++)
       {
           mp[arr[i]]++;
       }
       
       for(auto it = mp.begin() ; it !=mp.end() ; it++)
       {
           maxh.push({it->second , -1*(it->first)});
       }
       while(!maxh.empty())
       {
           int fre = maxh.top().first;
           int ele = maxh.top().second;
           for(int i = 1 ; i<=fre ; i++)
           {
               v.push_back(-1*ele);
           }
               maxh.pop();
       }
       return v;
   }

int main()
{
//code
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>a[i];
    }
     vector<int>v1 = sortByFreq(a , n);
     for(int i = 0 ; i<v1.size(); i++)
     {
         cout<<v1[i]<<" ";
     }
     cout<<endl;
}
return 0;
}