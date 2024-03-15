//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
         long long int i,c=0,pr=1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)c++;
            else pr*=nums[i];
        }
        //cout<<pr;
        vector<long long int>v(nums.size(),0);
        if(c>1)return v;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0) nums[i]=pr;
            else if(c==1)  nums[i]=0;
            else if(nums[i]<0) nums[i]=(pr)/nums[i];
            else nums[i]=pr/nums[i];
            //cout<<nums[i]<<" ";
        }
        return nums;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends