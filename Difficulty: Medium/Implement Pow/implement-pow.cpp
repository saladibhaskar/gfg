//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
        // code here
        if (e == 0) return 1.0; // Any number raised to power 0 is 1

    // Handle negative exponent
    if (e < 0) {
        b = 1 / b;
        e = -e;
    }

    double result = 1.0;
    int iterations = (e > 0) ? log2(e) + 1 : 0;  // Precompute log2(e) for loop iterations

    for (int i = 0; i < iterations; i++) {
        if (e % 2 == 1)  // If exponent is odd
            result *= b;
        b *= b;  // Square the base
        e /= 2;  // Divide exponent by 2
    }

    return round(result * 100000) / 100000; // Round to 5 decimal places
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends