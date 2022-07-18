class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={0};
        for(int i=0;i<sentence.size();i++){
            int index=sentence[i]-'a';
            arr[index]++;
        }
        
        for(int i=0;i<26;i++){
            if(arr[i]==0)
                return false;
        }
        return true;
    }
};