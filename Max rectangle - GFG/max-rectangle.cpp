//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
  
      void findNSL(vector<int> arr, int n,vector<int > &nsl){
        stack<pair<int,int>> st;
        
        for(int i=0;i<n;i++){
            
            while(st.empty()==false && st.top().first>=arr[i])
                st.pop();
                
            if(st.empty()) nsl.push_back(-1);
            
            else nsl.push_back(st.top().second);
            
            st.push({arr[i],i});
        }
        
    }
    
    void findNSR(vector<int> arr, int n,vector<int > &nsr){
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
    
    
    int getMaxArea(vector<int> arr, int n)
    {
        int area=0;
        vector<int> nsl;
        vector<int> nsr;
        
        findNSL(arr,n,nsl);
        findNSR(arr,n,nsr);
        
        vector<int> width(n,0);
        
        for(int i=0;i<n;i++)
            width[i] = nsr[i] - nsl[i] -1;
            
        for(int i=0;i<n;i++){
            int tempArea=width[i] * arr[i];
            
            area=max(tempArea,area);
        }
        
        return area;
    }
  
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        vector<int> rect(m);
        int maxArea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]==1)
                    rect[j]+=1;
                
                else
                    rect[j]=0;
            }
            int tempArea=getMaxArea(rect , m);
            maxArea=max(maxArea,tempArea);   
        }
        
        return maxArea;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends