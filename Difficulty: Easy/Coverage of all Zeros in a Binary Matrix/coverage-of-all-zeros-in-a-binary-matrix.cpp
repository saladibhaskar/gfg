//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        // Code here
        int n=mat.size();
        int m=mat[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if( mat[i][j]==0 && i-1>=0 && mat[i-1][j]==1)c++;
                if( mat[i][j]==0 && i+1<n && mat[i+1][j]==1)c++;
                if( mat[i][j]==0 && j-1>=0 && mat[i][j-1]==1)c++;
                if( mat[i][j]==0 && j+1<m && mat[i][j+1]==1)c++;
                
            }
        }
        return c;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends