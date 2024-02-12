//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long md=1000000007;
    long long bombit(int st,int end)
    {
        long long sm = 1;
        while(st<=end)
        {
            sm *= st;
            sm = sm%md;
            // cn++/
            st++;
        }
        //num += sm%int(pow(10,9)+7);
        return sm% int(pow(10,9)+7);
    }
    long long sequence(int n){
        // code here
        int cn = 1;
        long long num = 0;
        for(int i = 0; i< n;i++){
           int st = cn;
           int end = st+i;
           num += bombit(st,end)%md;
           cn = end + 1;
        }   
         //cout<< num;
        return num%int(pow(10,9)+7);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends