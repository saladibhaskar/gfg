//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // void pint(string s)
    // {
    //     for(int i=0;i<s.size();i++)
    //     {
    //         cout<<s[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    string reduce(string &a,int k,int mx)
    {
        int i=0,c=1;
        int n=a.size();
        if(mx==-1|| a.size()==0)
        {
            return a;
        }
        int j=0;
        while(i<a.size()-1)
        {
            if(a[i]==a[i+1])
            {
                c++;
                i++;
                if(c==k)
                {
                    j=i-k+1;//cout<<a.substr(j,k)<<i<<" "<<j<<" ";
                    a.erase(j,k);// pint(a);
                    c=1;
                }
            }
            else{
                i++;
                c=1;
            }
        }
            if(a.size()==n)mx=-1;
            return reduce(a,k,mx);
            
        
        
    }
    string Reduced_String(int k,string s){
        // Your code goes here
        if(k==1)
        {
            return "";
        }
       return reduce(s,k,0);
    }


};

//{ Driver Code Starts.

int main() {
    
    
    int t;cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.Reduced_String(k,s)<<"\n";
        
    }
    
	return 0;
}
// } Driver Code Ends