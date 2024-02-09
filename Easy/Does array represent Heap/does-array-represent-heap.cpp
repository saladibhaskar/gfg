//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    // bool bombit(vector<int>&v,int i,bool &t)
    // {
    // if(2*i+1>=v.size())  return t;
    // if(v[2*i+1]>=v[i]){
    //   t=false;
    //   return t;
    // }
    // bombit(v,2*i+1,t);
    // if(2*i+2>=v.size()){
    //  t=false;   
    //  return t;
    // }
    // bombit(v,2*i+2,t);
    bool isMaxHeap(int a[], int n)
    {
        // Your code goes here
        int i=0;
        while(i<n)
        {
            if(i*2+1<n )
            {
            if(a[i]<a[i*2+1])
            {
                return false;
                break ;
            }
            }
            if(i*2+2<n )
            {
            if(a[i]<a[i*2+2])
            {
                return false;
                break ;
            }
            }
            i++;
        }
        return true;
        
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends