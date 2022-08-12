/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // If p and q are smaller than root, go to left
        // If p and q are bigger than root, go to right
        // If one is bigger than root and the other is smaller than root, return root
        
        if((p->val < root->val) && (q->val < root->val)){
            return lowestCommonAncestor(root->left, p, q);
        }
        else if((p->val > root->val) && (q->val > root->val)){
            return lowestCommonAncestor(root->right, p, q);
        }
        else return root;
    }
};