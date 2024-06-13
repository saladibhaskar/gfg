//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
     
    int padovanSequence(int n)
    { 
        vector<int>v(n+1,0);
        v[0]=1,v[1]=1,v[2]=1;
        for(int i=3;i<=n;i++)
        {
            v[i]=(v[i-2]+v[i-3])%1000000007;
           // cout<<v[i]<<" ";
        }
        return v[n];
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends