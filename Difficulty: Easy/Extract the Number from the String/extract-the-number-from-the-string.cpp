//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
      long long  str(string sk)
      {
          long long  n=0;
           
          for(int i= 0;i<sk.size();i++)
          {
              n=n*10+(sk[i]-'0');
          }
          return n;
      }
    long long ExtractNumber(string s) {

        // code here
        long long nm=0,c=0,mx=0;
        string st="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                st+=s[i];
                if(s[i]=='9')c++;
                
            }
            else if(s[i]<='0' ||s[i]>='9'){
                 
                long long k=str(st);
                if(c==0)mx=max(k ,mx);//,cout<<mx<<" ";
                st="";
                c=0;
                k=0;
            }
        }
                long long  k=str(st);
                if(c==0)mx=max(k ,mx);
        if(mx>0)return mx;
        return -1;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends