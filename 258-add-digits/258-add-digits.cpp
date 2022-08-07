class Solution {
public:
    int addDigits(int num) {
        int temp=num;
        int ans=0;
        while(temp>0){
            int val=temp%10;
            temp=temp/10;
            if(temp==0){
                ans=val;
                break;
            }
            temp=temp+val;
            
            
        }
        return ans;
    }
};