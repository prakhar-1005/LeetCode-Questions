class Solution {
    
    bool solve(string s){
        int b=0;
        int e=s.size()-1;
        while(b<e){
            if(s[b++]!=s[e--])
                return false;
        }
        return true;
    }
    
public:
    
    string firstPalindrome(vector<string>& words) {
        string ans="";
        for(int i=0;i<words.size();i++){
            if(solve(words[i])==true){
                ans=words[i];
                break;
            }
        }
        return ans;
    }
};