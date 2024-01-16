//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int x)
    {
        //Your Code Here
        unordered_map<int,int>mp;
	    int i,j,c=0;
	    sort(a,a+n);
	    for(i=0;i<n;i++)
	    {
	        j=i+1;
	        int k=n-1;
	         while(j<k)
	         {
	             if(a[j]+a[k]==x-a[i])
	             {
	                 return true;
	             }
	             else if((a[j]+a[k])>x-a[i])
	             {
	                 k--;
	             }else{
	                 j++;
	             }
	         }
	    }
	    return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends