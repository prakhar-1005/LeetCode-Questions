class Solution {
    private:
    char low(char c){
        char temp;
        if((c>='a' && c<='z') || (c>='0' && c<='9') )
            return c;
        else 
            temp=c-'A' +'a';
        return temp;
    }
    
     bool valid(char c){
        if( (c>='a'&&c<='z') || (c>='A'&&c<='Z') || (c>='0'&&c<='9'))
            return 1; 
        else 
            return 0;
    }
    
public:
    bool isPalindrome(string s) {
     string t="";
        for(int j=0;j<s.length();j++){
        if(valid(s[j]))
            t.push_back(s[j]);
        }
        
        
        for(int i=0;i<t.length();i++)
             t[i]=low(t[i]);
        
        
    int b=0,e=t.length()-1;
        while(b<=e){
            if(t[b]!=t[e])
                return 0; 
            else {
            b++;
            e--;
            }
        }
        
        return 1;
        
    }
};