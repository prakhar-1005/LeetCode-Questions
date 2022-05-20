class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1;
        while(n>0){
            int temp=n%10;
            sum+=temp;
            pro*=temp;
            n/=10;
        }
        int diff=pro-sum;
        return diff;
    }
};