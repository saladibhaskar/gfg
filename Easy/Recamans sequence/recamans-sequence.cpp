//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void Recaman(int n , vector<int> &v , map<int,int> &mp , int i){
    if(i >= n) return;
    if(v[i-1] - i > 0 && mp[v[i-1]-i]==0){
        v.push_back(v[i-1] - i);
        mp[v[i-1]-i]=1;
    }
    else{
        v.push_back(v[i-1] + i);
        mp[v[i-1]+i]=1;
    }
    Recaman(n,v,mp,i+1);
    }
    vector<int> recamanSequence(int n){
    // code here
    vector<int>v;
    map<int,int>mp;
    int i=1;
    v.push_back(0);
    Recaman(n,v,mp,i);
    return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends