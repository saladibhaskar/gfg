//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int target) {
        // Your code here
        unordered_map<int, int> prefix_sum_count; // Stores the frequency of prefix sums
        int current_sum = 0;
        int count = 0;
    
        // Initialize with prefix sum 0 for subarrays starting from index 0
        prefix_sum_count[0] = 1;
    
        for (int num : arr) {
            current_sum += num; // Update current prefix sum
    
            // Check if there is a subarray that sums to the target
            if (prefix_sum_count.find(current_sum - target) != prefix_sum_count.end()) {
                count += prefix_sum_count[current_sum - target];
            }
    
            // Update the frequency of the current prefix sum
            prefix_sum_count[current_sum]++;
        }
    
        return count;

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
        int tar = stoi(ks);
        Solution obj;
        int res = obj.subArraySum(arr, tar);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends