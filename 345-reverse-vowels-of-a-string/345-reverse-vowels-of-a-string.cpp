class Solution {
    bool vowel(char s){
        s = tolower(s);
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            if(vowel(s[i])&&vowel(s[j])){
                swap(s[i++],s[j--]);
            }
            else if(!vowel(s[i]) && vowel(s[j])){
                i++;
            }
            else if (vowel(s[i])&& !vowel(s[j])){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
    
};