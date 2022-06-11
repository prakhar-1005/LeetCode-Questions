class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]== '(' || s[i]=='{' || s[i]=='[')    //if open bracket comes, push it to the stack
                st.push(s[i]);
            
            //if clsose bracket comes, check if it has correponding open bracket exist in the stack 
            //condition-1: if it does not exist, return false
            else{
                if(st.empty()) return false;
                else if(s[i] == ')' && st.top()!= '(') return false;
                else if(s[i] == '}' && st.top()!= '{') return false; 
                else if(s[i] == ']' && st.top()!= '[') return false;
                
                //condition-2: if open bracket exist for the close bracket, pop() the open bracket from the top of stack
                else
                    st.pop(); 
            }
            
            
        }
        
        //if string has valid parentheses then stack will be empty in the last
        if(st.empty()) return true;
        return false;
    }
};