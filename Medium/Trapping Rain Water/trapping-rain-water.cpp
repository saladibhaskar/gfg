//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int h[], int n){
        // code here
         long long  a[n],b[n]={0};
         long long i=0,j=0;
         long long ma=0;
         
         for(i=0;i<n;i++)
         {
             if(h[i]>ma)
             {
                 ma=h[i];
             }
             a[i]=ma;
         }
         ma=0;
         for(i=n-1;i>=0;i--)
         {
             if(h[i]>ma)
             {
                 ma=h[i];
             }
             b[i]=ma;
        }
        long int s=0;
        for(i=0;i<n;i++)
        {
             s+=min(a[i],b[i])-h[i];
        }
        return s;
         

    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends