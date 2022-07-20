class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxno=0;
        for(int i=0;i<sentences.size();i++){
            string s=sentences[i];
            int count=0;
            for(int j=0;j<s.size()-1;j++){
                if(s[j]==' ' && s[j+1]!=' '){
                    count++;
                }
                
            }
            count++;
            maxno=max(maxno,count);
        }
        return maxno;
    }
};