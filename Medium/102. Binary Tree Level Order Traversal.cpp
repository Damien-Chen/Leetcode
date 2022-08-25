/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // root = [3,9,20,null,null,15,17]
        vector<vector<int>> ans;
        // a queue to store the node we traverse
        
        queue<TreeNode*> q;
        if(root != NULL){
            q.push(root);
        }
        // q = [3]
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i = 0;i < size;i++){
                TreeNode* node = q.front();
                // node = 3
                q.pop();
                // q = []
                temp.push_back(node->val);
                // temp = [3]
                if(node->left){
                    q.push(node->left);
                }
                // q = [9]
                if(node->right){
                    q.push(node->right);
                }
                // q = [20,9]
            }
            ans.push_back(temp);
            // ans = [[3]]
        }
        return ans;
    }
};