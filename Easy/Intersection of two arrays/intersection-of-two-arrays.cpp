//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int nums1[], int nums2[], int n, int m) {
        // Your code goes here
         unordered_map<int,int>mp;
         int i;
        for(i=0;i<n;i++)
        {
           mp[nums1[i]]=1;
        }
        int v=0;
        for(i=0;i<m;i++)
        {
            if(mp.size()==0)break;
            if(mp.find(nums2[i])!=mp.end())
            {
              v++;
              mp.erase(nums2[i]);
            }
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends