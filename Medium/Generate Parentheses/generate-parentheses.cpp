//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void gen(string s,int n,vector<string>&v,int open ,int close)
    {
        if(close>open)return ;
        if(open+close>=2*n)
        {
            v.push_back(s);
            return;
        }
        if(open==n)
        {
            
            gen(s+')',n,v,open,close+1);
        }
        else
        {
            gen(s+'(',n,v,open+1,close);
            gen(s+')',n,v,open,close+1);
        }
        
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
        string s="(";
        vector<string>v;
        gen(s,n,v,1,0);
        return v;
        
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
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends