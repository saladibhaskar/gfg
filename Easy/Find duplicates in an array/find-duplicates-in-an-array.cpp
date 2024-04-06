//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        map<int,int>mp;
        vector<int>v;
        int i=0,j=n-1;
        while(i<j)
        {
             mp[arr[i]]+=1;
             mp[arr[j]]+=1;
             i++;
             j--;
        }
        if(n%2!=0)mp[arr[n/2]]+=1;
        for(auto it:mp)
        {
             if(it.second>1)v.push_back(it.first);
        }
        if(v.size()==0) v.push_back(-1);
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends