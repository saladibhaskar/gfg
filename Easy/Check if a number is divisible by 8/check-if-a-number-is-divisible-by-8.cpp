//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code herei
        if(s.size()<=4)
        {
            if((stoi(s))%8==0)return 1;
            else return -1;
        }
        int k=stoi(s.substr(s.size()-4));
       // cout<<k;
        if(k%8==0)return 1;
        else return -1;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends