class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int>box(highLimit,0);
        if(highLimit<10){
            return 1;
        }
        for(int i=lowLimit;i<=highLimit;i++){
            int num=i;
            int sum=0;
            while(num>0){
                int temp=num%10;
                sum+=temp;
                num=num/10;
            }
            box[sum]++;
        }
        int maxno=INT_MIN;
        for(int i=0;i<box.size();i++){
            maxno=max(maxno,box[i]);
        }
        return maxno;
    }
};