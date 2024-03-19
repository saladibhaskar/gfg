//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int pre[n],pos[n];
        pre[0]=0;
        int sm=0,i;
        for(i=0;i<n;i++)
        {
            sm+=a[i];
            pre[i+1]=sm;
        }
        //pos.push_back(0);
        // for(i=n-1;i>=0;i--)
        // {
        //     sm+=a[i];
        //     pre.insert(pre.begin(),sm);
        // }
        for(i=0;i<n;i++)
        {
            if(pre[i]==(sm-pre[i]-a[i]))return i+1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends