//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
int div(int n)
{
    int i,c=0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            if(n/i!=i)
            {
                c++;
            }
        }
    }
    return c+2;
}
	int DivCountSum(int n){
	    int i,sum=0;
	    for(i=2;i<=n;i++)
	    {
	        int x=div(i);
	        sum=sum+x;
	    }
	    return sum+1;
	}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.DivCountSum(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends