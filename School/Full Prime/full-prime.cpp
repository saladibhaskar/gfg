//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    int prime(long int n)
    {
        if(n==1 ||n==0)return 0;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)return 0;
        }
        return 1;
    }
	int fullPrime(long int n){
	     long int f=0,i,d=0;
	     if(!prime(n))return 0;
	        int r,c=0;
	        while(n!=0)
	        {
	            r=n%10;
	            if(!prime(r))return 0;
	            n=n/10;
	        }
	        return 1;
	}
};



//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends