class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int store[26]={0};
        int value=0;
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a';
            store[index]++;  
            value=store[index];
        }
        
        for(int i=0;i<26;i++){
            if(store[i]==0)
                continue;
            
            if(store[i]!=value)
                return false;
        }
        return true;
    }
};