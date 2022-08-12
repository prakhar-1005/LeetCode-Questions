class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for (int a = 1; a < n; ++a) {
            int b = n - a;
            if (to_string(a).find('0') == string::npos && to_string(b).find('0') == string::npos){
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans; 
    }
};