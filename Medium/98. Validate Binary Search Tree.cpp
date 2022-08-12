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
    bool Test_if_BST(TreeNode* root,long low,long high){
        // Empty tree are valid BSTs
        if(root == NULL){
            return true;
        }
        
        // Condition of Binary Search Tree
        // left side node values of the root should be less value than the root and right side should be greater
        // If that is true check recursively for the root child`s
        
        if((root->val < high) && (root->val > low) ){
            return (Test_if_BST(root->left, low, root->val) && Test_if_BST(root->right, root->val, high));
        }
        else{
            return false;
        }
        
    }
    
    
    
    
    bool isValidBST(TreeNode* root) {
        bool ans = Test_if_BST(root, LONG_MIN, LONG_MAX);
        return ans;
            
    }
};