//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    
	    // code here
	    map<char,int>mp1;
	    for(auto it:s)
	    {
	        mp1[it]+=1;
	    }
	     map<int,int>mp2;
	     for(auto it:mp1)
	     {
	         mp2[it.second]+=1;
	     }
	     if(mp2.size()==1)
	     {
	         return true;
	     }
	     else if(mp2.size()>2){
	         return false;
	     }else
	     {
	          auto it=mp2.begin();
	          int k1=it->first;
	          int c1=it->second;
	          it++;
	          int k2=it->first;
              int c2=it->second;
              //cout<<k1<<c1<<k2<<c2;
              if(c1==1 && k1>k2 && abs(k1-k2)==1){
                  return true;
              }else if(c2==1 && k2>k1 && abs(k1-k2)==1){
                  return true;
              }else if(c1==1 && k1==1)return true;
              else{
                  return false;
              }
	     }
	     return false;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends