class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n=words.size();
        int count=0;
        int flag=0;
        for(int i=0;i<n;i++){
            string x=words[i];
            for(int j=0;j<x.length();j++){
                if(x[j]!=s[j]){
                    flag=1;
                    break;
                } 
            }
            if(flag==0)
                count++;
            else flag=0;
        }
        return count;
    }
};