class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // stones = [2,7,4,1,8,1]
        priority_queue<int> pq(stones.begin(), stones.end());
        // pa = [1,1,2,4,7,8] top = 8
        int ans;
        while(pq.size() > 1){
            int max_1 = pq.top();
            pq.pop();
            int max_2 = pq.top();
            pq.pop();
            if(max_1 != max_2){
                pq.push(max_1 - max_2);
            }
        }
        if(pq.empty()){
            return 0;
        }
        return pq.top();
    }
};
