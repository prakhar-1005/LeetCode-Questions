class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        if(n==1)
            return nums;
        
        
        vector<int> ans;
        int b=0;
        int m=n;
        int count=1;
        while(b<n || m<2*n){
            if(count%2!=0)
              ans.push_back(nums[b++]);
            
            
            else
              ans.push_back(nums[m++]);
            
            count++;
            
        }
        
        return ans;
        
    }
};