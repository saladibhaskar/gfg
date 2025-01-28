//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void prem(int i,string &s,set<string>&ans)
    {
        if(i==s.size())
        {
            ans.insert(s);
            return;
        }
        for(int j=i;j<s.size();j++)
        {
            swap(s[i],s[j]);
            prem(i+1,s,ans);
            swap(s[i],s[j]);
        }
        
    }
    vector<string> findPermutation(string &s) {
        // Code here therev
        set<string>st;
        prem(0,s,st);
        vector<string>v;
        for(auto it:st)
        {
            v.push_back(it);
        }
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends