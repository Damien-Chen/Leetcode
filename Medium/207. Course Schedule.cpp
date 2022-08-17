class Solution {
public:
    // find the cycle in the directed graph
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        for(int i{};i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        // checking the cycle in directed graph
        vector<int> vis(numCourses, 0);
        vector<int> dfsvis(numCourses, 0);
        
        for(int i{};i<numCourses;i++){
            if(!vis[i]){
                if(CheckCycle(i, vis, dfsvis, adj))
                    return false;
            }
        }
        
        return true;
    }


private:
    bool CheckCycle(int node, vector<int>&vis, vector<int>&dfsvis, vector<int> adj[]){
        vis[node] = 1;
        dfsvis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(CheckCycle(it, vis, dfsvis, adj))
                    return true;
            }
            else if(dfsvis[it] == 1) 
                return true;
        }
        dfsvis[node] = 0;
        return false;
    }
};