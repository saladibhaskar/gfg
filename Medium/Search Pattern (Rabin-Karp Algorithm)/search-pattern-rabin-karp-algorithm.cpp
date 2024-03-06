//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string t, string p)
        {
            //code here.
            int i=0;
            vector<int>v;
            int n=p.size();
            while(i+t.size()-1<n)
            {
               //cout<<p.substr(i,t.size())<<" "<<t<<" ";
              string  s = p.substr(i,t.size());
                if(s==t)
                {
                    v.push_back(i+1);
                } 
                i++;
                
            }
            return v;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends