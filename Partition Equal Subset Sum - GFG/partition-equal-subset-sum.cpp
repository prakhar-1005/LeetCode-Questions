//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        int totalSum=0;
        for(int i=0;i<N;i++)
            totalSum+=arr[i];

        if(totalSum%2!=0)
            return false;

        int sum=totalSum/2;

        vector<vector<int>>dp(N,vector<int>(sum+1,0));

        for(int i=0;i<N;i++)
            dp[i][0]=1;

        if(arr[0]<sum)
            dp[0][arr[0]]=1;  

        for(int i=1;i<N;i++){
            for(int t=1;t<=sum;t++){
                int notTake=dp[i-1][t];
                int take=0;

                if(arr[i]<=t)
                    take= dp[i-1][t-arr[i]];

                dp[i][t]= take||notTake;
            }
        }      

        return dp[N-1][sum];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends