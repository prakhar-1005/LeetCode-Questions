//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    void findNSL(long long arr[], int n,vector<long long > &nsl){
        stack<pair<int,int>> st;
        
        for(int i=0;i<n;i++){
            
            while(st.empty()==false && st.top().first>=arr[i])
                st.pop();
                
            if(st.empty()) nsl.push_back(-1);
            
            else nsl.push_back(st.top().second);
            
            st.push({arr[i],i});
        }
        
    }
    
    void findNSR(long long arr[], int n,vector<long long > &nsr){
        stack<pair<int,int>> st;
        
        for(int i=n-1;i>=0;i--){
            
            while(st.empty()==false && st.top().first>=arr[i])
                st.pop();
                
            if(st.empty()) nsr.push_back(n);  //important
            
            else nsr.push_back(st.top().second);
            
            st.push({arr[i],i});
        }
        reverse(nsr.begin(),nsr.end());
    }
    
    long long getMaxArea(long long arr[], int n)
    {
        long long area=0;
        vector<long long> nsl;
        vector<long long> nsr;
        
        findNSL(arr,n,nsl);
        findNSR(arr,n,nsr);
        
        vector<long long> width(n,0);
        
        for(int i=0;i<n;i++)
            width[i] = nsr[i] - nsl[i] -1;
            
        for(int i=0;i<n;i++){
            long long tempArea=width[i] * arr[i];
            
            area=max(tempArea,area);
        }
        
        return area;
        
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends