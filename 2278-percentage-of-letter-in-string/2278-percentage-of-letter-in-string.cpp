class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        for(char ch : s){
            if(ch==letter)
                count++;
        }
/*writing the output like this i.e. multipying by 100 and then dividing by size is important as the return type
is integer and the datatype of count and s.size() is also integer so dividing them should also return an integer if we write (count/s.size())*100 then count/s.size() will give a fraction which will be considered as 0 as it is an integer.*/        
        
        return (count*100)/s.size(); 
        
    }
};

