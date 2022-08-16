class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a';
            arr[index]++;
            }
        int flag=0;
        int i=0;
        int ans=0;
        while(i<s.size()){
            if(arr[s[i]-'a']==1){
                flag=1;
                ans=i;
                break;
            }
            i++;
        }
        if(flag==1)
        return ans;
        
        else  
            return -1;
    }
};