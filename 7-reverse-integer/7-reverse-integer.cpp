class Solution {
public:
    int reverse(int x) {
        int rev=0;
        int temp;
        while(x!=0){
             temp=x%10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10)
                return 0;
            rev=rev*10+temp;
            x/=10;
        }
        return rev;
    }
};