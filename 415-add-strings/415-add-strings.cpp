/*class Solution {
public:
    string addStrings(string num1, string num2) {
        long long n=stoi(num1);
        long long m=stoi(num2);
        long long ans=n+m;
        string fans=to_string(ans);
      return fans;  
    }
    does not work for
    
};*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int carry = 0;
        int n = num1.size();
        int m = num2.size();
        n = max(n, m);
        
        while(num1.size() < n) num1 = "0" + num1;
        while(num2.size() < n) num2 = "0" + num2;
        
        for(int i = n - 1; i >= 0; i--){
            int a = num1[i] - '0';
            int b = num2[i] - '0';
            int sum = a + b + carry;
            char c = (sum % 10) + '0';
            res = c + res;
            carry = sum / 10;
        }
        if(carry > 0) res = "1" + res;
        return res;
    }
};