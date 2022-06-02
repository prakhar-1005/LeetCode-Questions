class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int col=matrix.size();
        int row=matrix[0].size();
        vector<vector<int>> ans(row,vector<int> (col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans[i][j]=matrix[j][i];
            }
        }
        return ans;
    }
};