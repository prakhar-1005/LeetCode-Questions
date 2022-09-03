class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int i=0;
        int j=c-1;
        
        while(i<r && j>-1){
            
            if(target == matrix[i][j])
                return true;
            
            if(target > matrix[i][j]){
                i++;
            }
            
            else
                j--;
            
        }
        return false;
    }
};