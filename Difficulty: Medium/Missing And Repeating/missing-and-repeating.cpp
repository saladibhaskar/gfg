//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int rp;
        long long sm=0;
        long  n=arr.size();
        for( int i=0;i<arr.size();i++)
        {
            sm+=arr[i];
            mp[arr[i]]+=1;
            if(mp[arr[i]]==2)
            {
                rp=arr[i];
            }
        }
        // cout<<sm<<" ";
        // cout<<(n*(n+1))/2<<" ";
        int ms=(n*(n+1)/2-(sm-rp));
        return {rp,ms};
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
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends