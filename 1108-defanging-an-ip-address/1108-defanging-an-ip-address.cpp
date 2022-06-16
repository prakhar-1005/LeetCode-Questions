class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string res="";
        for(int i=0;i<n;i++){
            if(address[i]=='.'){
                res.push_back('[');
                res.push_back('.');
                res.push_back(']');
                
            }
            else {
                res.push_back(address[i]);
             }
        }     
        return res;
    }
};