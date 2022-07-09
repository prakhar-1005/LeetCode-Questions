class Solution {
    void solve(string digits,vector<string>& ans,string output,int index,string map[]){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
       int n=digits[index]-'0';
        string val=map[n];
        for(int i=0;i<val.size();i++){
            output.push_back(val[i]);
            solve(digits,ans,output,index+1,map);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
       vector<string> ans;
        if(digits.size()==0)
            return ans;
        
        string output="";
        int index=0;
        string map[10]={"00","01","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,output,index,map);
        return ans;
    }
};