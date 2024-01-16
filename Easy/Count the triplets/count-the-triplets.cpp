//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	   unordered_map<int,int>mp;
	    int i,j,c=0;
	    sort(arr,arr+n);
	    for(i=0;i<n;i++) mp[arr[i]]++;
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(mp[arr[i]+arr[j]]>0)
	            {
	                c++;
	            }
	        }
	    }
	    return c;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends