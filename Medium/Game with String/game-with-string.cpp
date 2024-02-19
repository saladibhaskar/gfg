//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        priority_queue<int>q;
        map<char,int>mp;
        
        for( int i=0;i<s.size();i++)
        {
            mp[s[i]]+=1;
        }
        for(auto it:mp)
        {
            q.push(it.second);
        }
        while(k>0 || q.empty())
        {
            int t=q.top();
            t-=1;
            q.pop();
            q.push(t);
            k--;
        }
        int sm=0;
        while(!q.empty())
        {
            int t=q.top();
            sm+=t*t;
            q.pop();
        }
        return sm;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends