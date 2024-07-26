//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        map<char,int>mp;
        int xt=0;
        for( int i=0 ;i<str.size();i++)
        {
            if(str[i]<='z' && str[i]>='a')
            {
                
                mp[str[i]]+=1;
                if(mp[str[i]]>1)
                {
                    xt+=1;
                }
            }
            if(mp.size()==26)return true;
        }
        int req=26-mp.size();
        if(k>=req && xt>=req)return true;
        return false;

 }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends