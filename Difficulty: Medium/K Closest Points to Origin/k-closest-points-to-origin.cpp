//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        vector<vector<int>>ans;
        map<double,vector<vector<int>>>mp;
        for(int i=0;i<points.size();i++)
        {
                int x1=points[i][0],y1=points[i][1];
                double dis=sqrt(x1*x1+y1*y1);
                mp[dis].push_back(points[i]);
        }
        for(auto it:mp)
        {
            for(int i=0;i<it.second.size();i++)
            {
                if(k!=0)
                {
                    ans.push_back(it.second[i]);
                    k--;
                    
                }
            }
            if(k==0)break;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends