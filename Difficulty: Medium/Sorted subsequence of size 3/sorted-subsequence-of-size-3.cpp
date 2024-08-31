//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2) {
    int m = v2.size();
    int n = v1.size();
    int j = 0; // For index of v2

    // Traverse v1 and v2
    for (int i = 0; i < n && j < m; i++) {
        if (v1[i] == v2[j]) {
            j++;
        }
    }
    return (j == m);
}


// } Driver Code Ends
// Function to find three numbers in the given array
// such that arr[smaller[i]] < arr[i] < arr[greater[i]]

class Solution {
  public:
//   vector<int>rec={};
//   void bombit(vector<int>& arr, vector<int>& ans, int i) {
//         if (i >= arr.size() || ans.size() > 3) return;

//         if (ans.size() == 3) {
//             if (ans[0] < ans[1] && ans[1] < ans[2]) {
//                 rec = ans;
//                 return;
//             }
//         }

//         // Only push if the current element is greater than the last one in ans
//         if (ans.empty() || arr[i] > ans.back()) {
//             ans.push_back(arr[i]);
//             bombit(arr, ans, i + 1);
//             ans.pop_back();  // Backtrack
//         }

//         bombit(arr, ans, i + 1);  // Explore not picking the current element
//     }
//     vector<int> find3Numbers(vector<int> &arr) {
//         // Code here
//         rec.clear();
//         vector<int>ans={};
//         bombit(arr,ans,0);
//         //for(int i=0;i<rec.size();i++)cout<<rec[i]<<" ";
//         return rec;
//     }
vector<int> find3Numbers(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return {};  // Not enough elements to form a sequence

        vector<int> prefix_min(n), postfix_max(n);

        // Fill prefix_min
        prefix_min[0] = arr[0];
        for (int i = 1; i < n; ++i) {
            prefix_min[i] = min(prefix_min[i - 1], arr[i]);
        }

        // Fill postfix_max
        postfix_max[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            postfix_max[i] = max(postfix_max[i + 1], arr[i]);
        }

        // Find the sequence
        for (int i = 1; i < n - 1; ++i) {
            if (prefix_min[i - 1] < arr[i] && arr[i] < postfix_max[i + 1]) {
                return {prefix_min[i - 1], arr[i], postfix_max[i + 1]};
            }
        }

        return {};  // No such sequence found
}
};

//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution obj;
        auto res = obj.find3Numbers(arr);
        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and isSubSequence(arr, res)) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends