//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
int maxLength(string& s) {
    stack<int> st;  // Store indices
    st.push(-1);    // Base for valid substrings
    int maxLen = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(i);  // Push index of '('
        } else {
            st.pop();    // Pop for ')'
            if (!st.empty()) {
                maxLen = max(maxLen, i - st.top());
            } else {
                st.push(i);  // Reset base if stack is empty
            }
        }
    }
    return maxLen;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends