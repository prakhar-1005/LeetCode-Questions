class Solution {
    private:
        bool compare(int a[26],int b[26]){
            for(int i=0;i<26;i++){
                if(a[i]!=b[i])
                    return false;
            }
            return true;
        }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        
        
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        
        
        int count2[26]={0};
        int window=s1.length();
        int i=0;
      
        while(i<window && i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(compare(count1,count2))
            return true;
        
        
        while(i<s2.length()){
            char newItem=s2[i];
            int index=newItem-'a';
            count2[index]++;
           
            
            char oldItem=s2[i-window];
            index=oldItem-'a';
            count2[index]--;
             i++;                              //Important to increment i here only
            if(compare(count1,count2))
            return true;
            
        }
        
        return false;
        
    }
};