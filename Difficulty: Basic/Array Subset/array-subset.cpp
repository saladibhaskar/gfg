//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   // Function to check if b is a subset of a
bool isSubset(vector<int> &a, vector<int> &b) {
    map<int, int> mp;

    // Count occurrences of each element in b
    for (int i = 0; i < b.size(); i++) {
        mp[b[i]] += 1;
    }

    // Decrease count for elements found in a
    for (int i = 0; i < a.size(); i++) {
        if (mp.find(a[i]) != mp.end()) {
            mp[a[i]] -= 1;
            if (mp[a[i]] == 0) {
                mp.erase(a[i]);
            }
        }
    }

    // If map is empty, all elements in b were found in a
    if (mp.size() == 0) {
        return true;
    } else {
        return false;
    }
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a1, a2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a1.push_back(number);
        }
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            a2.push_back(number);
        }
        Solution s;
        bool ans = s.isSubset(a1, a2);
        if (ans) {
            cout << "true"
                 << "\n";
        } else {
            cout << "false"
                 << "\n";
        }
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends