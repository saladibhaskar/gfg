//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
         unordered_set<int> st;
        vector<int> result;

        for (int i = 0; i < arr.size(); i++) {
            if (st.find(arr[i]) == st.end()) { // Check if arr[i] is not in the set
                st.insert(arr[i]);            // Insert arr[i] into the set
                result.push_back(arr[i]);     // Add arr[i] to the result vector
            }
        }

        return result;
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
        Solution obj;
        vector<int> ans = obj.removeDuplicate(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends