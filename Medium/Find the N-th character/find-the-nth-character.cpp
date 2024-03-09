//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
         vector<char>v;
        string ans="";
        while(r--){
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                {
                    ans+="10";
                }
                else
                {
                    ans+="01";
                }
            }
            s=ans.substr(0,n+1);
            ans="";
        }
        //cout<<s;
        return s[n];
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends