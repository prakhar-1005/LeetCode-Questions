//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
        int solve(vector<vector<int>>& triangle,int curRow,int curCol ,int row,vector<vector<int>>&dp){
        if(curRow==row+1){
            return 0;
        }

        if(dp[curRow][curCol]!=-1) return dp[curRow][curCol];
        
        int down1=INT_MAX,down2=INT_MAX;
        
            down1= triangle[curRow][curCol] + solve(triangle,curRow+1,curCol,row,dp);
            down2= triangle[curRow][curCol] + solve(triangle,curRow+1,curCol+1,row,dp);

        return dp[curRow][curCol]=min(down1,down2);

    }
  public:
    int minimizeSum(int n, vector<vector<int>>& triangle) {
                int r=triangle.size();
        vector<vector<int>> dp(r,vector<int>(r,-1));
        return solve(triangle,0,0,r-1,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends