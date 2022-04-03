class Solution {
public:
    int countEven(int num) {
        
        int count=0;
        int dig=0;
        int dup=0;
        int sum=0;
        for(int i=2;i<=num;i++){
            dup=i;
            while(dup>0){
            dig=dup%10;
            sum+=dig;
            dup=dup/10;
             }
            if(sum%2==0){
                count++;
              }
           sum=0;
           }
    
        return count;
    }
};