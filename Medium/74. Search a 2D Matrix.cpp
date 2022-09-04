class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
        int rows = matrix.size(); // rows = 3
        int cols = matrix[0].size(); // cols = 4
        
        int row = 0;
        int col = cols - 1;
        cout << rows << "\n"; // 
        cout << cols << "\n";
        // Only check the last element in the row.
        // If the last element in a row is greater than target, then check every element in that row
        // If the last element in a row is less than target, then shift to next row
        
        while(row < rows && col > -1){
            // target = 3
            int cur = matrix[row][col]; // cur = matrix[0][3] = 7
            if(cur == target){ 
                return true;
            }
            if(target > cur){     
                row++;
            }
            else{           // 3 < 7 ,col-- => cur = matrix[0][2] => matrix[0][1].
                col--;
            }
        }
        return false;
    }
};