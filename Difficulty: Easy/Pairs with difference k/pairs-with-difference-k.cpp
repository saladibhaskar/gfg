//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        // map<int,int>mp;
        // int count=0;
        // for( int i=0;i<arr.size();i++)
        // {
        //     mp[arr[i]]+=1;
        // }
        // for(auto it:mp)
        // {
        //     int rq=abs(it.first+k);
        //     if(mp.find(rq)!=mp.end())
        //     {
        //         //cout<<rq<<" ";
        //         count+=(mp[rq]*it.second);
        //         mp.erase(rq);
        //         mp.erase(it.first);
        //     }
             
        // }
        //return count;
        int n = arr.size();  
    unordered_map<int, int>mp;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
      
        // Check if the complement (arr[i] + k)
        // exists in the map. If yes, increment count
        if (mp.find(arr[i] + k) != mp.end()) 
            cnt += mp[arr[i] + k]; 
      
        // Check if the complement (arr[i] - k)
        // exists in the map. If yes, increment count
        if (mp.find(arr[i] - k) != mp.end()) 
            cnt += mp[arr[i] - k]; 
      
        // Increment the frequency of arr[i]
        mp[arr[i]]++; 
    }
    return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends