class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        for(int i = 0, j = 0; i < firstList.size() && j < secondList.size(); ){
            // left 取 最大開頭，right 取最小結尾
            int left = max(firstList[i][0], secondList[j][0]);
            int right = min(firstList[i][1], secondList[j][1]);
            // left = 1, right = 2
            if(left <= right){
                ans.push_back(vector<int> {left, right});
            }
            if(firstList[i][1] < secondList[j][1]){ // 2 < 5
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};