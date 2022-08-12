class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
            return stones[0];
        
        sort(stones.begin(),stones.end());
        int n=stones.size();
        int y;
        int x;
        while(stones[x]>0){
            y=n-1;
            x=n-2;
            if(stones[y]==stones[x])
            {
                stones[y]=stones[x]=0;
                sort(stones.begin(),stones.end());

            }
            
            else{
                stones[y]=stones[y]-stones[x];
                stones[x]=0;
                sort(stones.begin(),stones.end());      
            }
            
        }
        if(stones[y]>=0)
        return stones[y];
        
        else 
            return 0;
    }
};