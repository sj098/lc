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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root) {
            if (val == root->val) {
                return root;
            }

            if (val < root->val) {
                return searchBST(root->left, val);
            }

            if (val > root->val) {
                return searchBST(root->right, val);
            }
        }
        return nullptr;
    }
};

// look at given value and compare it to value of root
// if value < root, look at left children
// call function with left child as root, using the same value
// if node == val, return node
// if value > root, look at right children
// call function, etc. 
// at the very end of function, return null