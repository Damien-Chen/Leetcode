class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // matrix = [[1,2,3],[4,5,6],[7,8,9]]
        //            (0,0) (0,1) (0,2)
        //            (1,0) (1,1) (1,2)
        //            (2,0) (2,1) (2,2)
        int n = matrix.size(); // n = 3
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // matrix = [[1,4,7],[2,5,8],[3,6,9]]
        
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        // matrix = [[7,4,1],[8,5,2],[9,6,3]]
    }
};