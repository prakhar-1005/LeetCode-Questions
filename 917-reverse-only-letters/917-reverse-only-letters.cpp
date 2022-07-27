class Solution {
public:
    string reverseOnlyLetters(string s) {
        int b=0;
        int e=s.size()-1;
        
        while(b<e){
            if(((s[b]>='a' && s[b]<='z') || (s[b]>='A' && s[b]<='Z')) && ((s[e]>='a' && s[e]<='z') || (s[e]>='A' && s[e]<='Z'))) 
                swap(s[b++],s[e--]);
             
            else {
                if(((s[b]>='a' && s[b]<='z') || (s[b]>='A' && s[b]<='Z'))==false)
                    b++;
                
                if(((s[e]>='a' && s[e]<='z') || (s[e]>='A' && s[e]<='Z'))==false)
                    e--;
            }
            
        }
        return s;
    }
};