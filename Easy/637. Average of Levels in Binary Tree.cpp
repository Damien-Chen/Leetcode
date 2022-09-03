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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){  // q = [9,20]
            long temp = 0; // temp = 0 
            int s = q.size(); // s = 2
            for(int i = 0; i < s; i++){
                TreeNode* t = q.front();
                q.pop(); // q = [20]
                if(t->left != NULL){
                    q.push(t->left);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
                temp += t->val;
            }
            ans.push_back((double) temp / s);
        }
        return ans;
    }
};