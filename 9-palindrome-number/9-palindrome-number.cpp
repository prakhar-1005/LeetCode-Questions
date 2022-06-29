class Solution {
public:
    bool isPalindrome(int x) {   
        long long rev=0;
        int tempx=x;
        while(tempx>0){
            int temp=tempx%10;
            rev=rev*10+temp;
            tempx=tempx/10;
        }
       if(rev==x)
        return true;
        
       else 
        return false;
    }
};