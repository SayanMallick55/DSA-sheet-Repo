class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>ans(row,vector<int>(col));
        for(int i = 0 ; i<row;i++){
            for(int j = 0 ; j<col;j++){
                ans[j][(row-1)-i]=matrix[i][j];
            }
        }
        matrix=ans;
    }
};


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size = matrix.size();
        for(int i = 0 ; i<size-1;i++){
            for(int j = i+1 ; j<size;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0 ; i<size ;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
       
    }
};