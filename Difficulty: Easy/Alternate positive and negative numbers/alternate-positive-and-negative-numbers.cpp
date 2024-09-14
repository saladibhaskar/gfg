//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        queue<int>p,n;
        for( int i=0;i<arr.size();i++)
        {
            if(arr[i]<0)n.push(arr[i]);
            else p.push(arr[i]);
        }
        int i=0;
        while(i<arr.size())
        {
            if(!p.empty())
            {
                arr[i]=p.front();
                p.pop();
                i++;
            }
            if(!n.empty())
            {
                arr[i]=n.front();
                n.pop();
                i++;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends