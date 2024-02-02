//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int n=s.size();
        int i;
        int num=0;
        int l=n;
        if(s[0]=='-'){
            i=1;
            l--;
        }else{
            i=0;
        }
        for(i;i<s.size();i++)
        {
           // cout<<s[i];
            int b=int(s[i])-48;
            //cout<<b;
            if(b<=9 && b>=0)
            {
                int k=pow(10,l-1);
                num+=(b)*k;
                //cout<<(b)*k<<" ";
                
            }
            else
            {
                return -1;
            }
            l--;
        }
        if(s[0]=='-')
        {
            return num*-1;
        }else
        {
            return num;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends