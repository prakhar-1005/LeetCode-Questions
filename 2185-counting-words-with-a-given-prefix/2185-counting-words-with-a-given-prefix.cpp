class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int i=0;i<words.size();i++){
            
            size_t found=words[i].find(pref);
            if(found==0)
                count++; 
        }
        return count;
    }
};