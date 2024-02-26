//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<string>v;
	void bombit(string s,int i,string ans)
	{
	    if(i>=s.size())
	    {
	        v.push_back(ans);
	        return;
	    }
	    bombit(s,i+1,ans+s[i]);
	    bombit(s,i+1,ans);
	    
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    v.clear();
		    bombit(s,0,"");
		    sort(v.begin(),v.end());
		    v.erase(v.begin());
		    return v;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends