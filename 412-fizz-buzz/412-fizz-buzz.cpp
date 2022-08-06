class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++){
            if(i%3==0){
                if(i%5==0)
                    ans.push_back("FizzBuzz");
                else
                    ans.push_back("Fizz");
                
            }
            else if(i%5==0){
                ans.push_back("Buzz");
            }
            else{
                string val;
                val=to_string(i);
                ans.push_back(val);
            }
            
        }
        return ans;
    }
};