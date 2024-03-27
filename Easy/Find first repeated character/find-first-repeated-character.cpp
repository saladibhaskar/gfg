//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]+=1;
        if(mp[s[i]]>1){
            string k="";
            k+=s[i];
            return k;
        }
    }
    return "-1";
}