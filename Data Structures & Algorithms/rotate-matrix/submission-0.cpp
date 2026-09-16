class Solution {
public:
    void transpose(vector<vector<int>>& matrix, int n){
        for(int i =0; i<n-1; i++){
            for(int j =i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    void reverse(vector<vector<int>>& matrix, int n){
        for(int i =0; i<n; i++){
            for(int j =0; j<n/2; j++){
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        transpose(matrix, n);
        reverse(matrix, n);
      
    }
};
