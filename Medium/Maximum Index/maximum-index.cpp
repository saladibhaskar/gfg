//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

    class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        
        vector<int>v1(n),v2(n);
        v1[0]=a[0];
        v2[n-1]=a[n-1];
        for(int i=1;i<n;i++){
            v1[i]=min(v1[i-1],a[i]);
            v2[n-i-1]=max(v2[n-i],a[n-i-1]);
        }
        int ans=0,i=0,j=0;
        while(i<n and j<n){
            if(v1[i]<=v2[j]){
                ans=max(ans,j-i);
                j++;
            }else{
                i++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends