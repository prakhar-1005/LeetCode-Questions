//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    int solve(int row,int col,vector<vector<int>> &dp){
    if(row==1 && col==1)
        return 1;
    
    if(dp[row][col]!=-1) return dp[row][col];

    int u=0,l=0;
    if(row>1)
     u=solve(row-1,col,dp);
    
    if(col>1)
     l=solve(row,col-1,dp);
    
    return dp[row][col]= u+l;
}
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a+1,vector<int>(b+1,-1));
        return solve(a,b,dp);   
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends