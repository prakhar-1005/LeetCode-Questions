class Solution {
public:
    char repeatedCharacter(string s) {
        int arr[26]={0};
        char ans;
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a';
            arr[index]++;
            if(arr[index]>1){
                ans=index+'a';
                break;
                }
            }

        return ans;
        
     
    }
};