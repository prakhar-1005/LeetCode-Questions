class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0;
        int ansInd=0;
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            
            chars[ansInd++]=chars[i];
            int count=j-i;
            if(count>1){
                
                string cnt=to_string(count);
                for(char ch:cnt)
                    chars[ansInd++]=ch;
            }
            i=j;
        }
        return ansInd;
    }
};