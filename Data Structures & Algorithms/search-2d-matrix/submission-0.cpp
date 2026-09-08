class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n = matrix.size();
       int m = matrix[0].size();
       int low =0;
       int  high = n*m-1;
       while(low<=high){
            int mid = (low-high)/2+high;
            int row = mid/m;
            int col = mid%m;
            int elem = matrix[row][col];
            if(elem==target) return true;
            else if(elem<target) low=mid+1;
            else high = mid-1;
       }
       return false;
    }
};
