class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int count=1;
        string ans="";
        while(i<word1.size() && j<word2.size()){
            if(count%2!=0){
                ans.push_back(word1[i]);
                i++;
            }
            else {
               ans.push_back(word2[j]);
                j++; 
            }
            count++;
            
        }
        if(j==word2.size()){
            for(int k=i;k<word1.size();k++)
                ans.push_back(word1[k]);
            
        }
        else if(i==word1.size()){
            for(int k=j;k<word2.size();k++)
                ans.push_back(word2[k]);
            
        }
        else if(i==word1.size() && j==word2.size() )
            return ans;
        return ans;
    }
};