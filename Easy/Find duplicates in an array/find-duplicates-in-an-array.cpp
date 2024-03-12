//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        unordered_map<long long ,long long>mp;
        vector<int>v;
        long long  i;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]+=1;
        }
        for(auto it: mp)
        {
            
            if(it.second>1)
            {
                v.push_back(it.first);
            }
        }
        if(v.size()==0)return {-1};
        sort(v.begin(),v.end());
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