class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        string arr=s; 
        /*initilaised to s because it is sbhowing null string if iniitallised to null and if iniitalised 
        to some other value which is smaller than s then only those many characters will be copied so to be 
        sure that it is equal to s we initialise it to s */
        for(int i=0;i<n;i++){
            arr[indices[i]]=s[i];
           
        }
        return arr;
    }
};