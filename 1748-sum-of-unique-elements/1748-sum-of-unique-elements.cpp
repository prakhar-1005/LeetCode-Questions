class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int store[101]={};
        
        for(int i=0;i<n;i++){
            store[nums[i]]++;
        }
        
        for(int i=1;i<=100;i++){
            if(store[i]==1)
                sum+=i;
        }
        return sum;
    }
};