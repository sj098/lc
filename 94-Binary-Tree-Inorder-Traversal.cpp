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
    vector<int> nodes;

    void inorderHelper(TreeNode* root) {
        // where tree is empty
        if (root == nullptr) {
            return;
        }
        // where tree doesnt have left/right children
        // if (!root->left && !root->right) {
        //     nodes.push_back(root->val);
        //     cout << root->val << endl;
        //     return;
        // }
        // start recursion
        if (root->left) {
            inorderHelper(root->left);
            // nodes.push_back(root->left->val);
            // cout << \1: \ << root->left->val << endl;
        }

        nodes.push_back(root->val);
        // cout << \2: \ << root->val << endl;

        if (root->right) {
            inorderHelper(root->right);
            // nodes.push_back(root->right->val);
            // cout << \3: \ << root->right->val << endl;
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorderHelper(root);
        return nodes;
    }


};


// 11/15/24 with Harshitha 
// Ideally want to push back ONCE every recursive function
// Error: pushed back INSIDE recursive loop and outside recursive function - ONLY WANT TO 
// PUSH BACK AT ONE POINT
// Error 2: Established vector inside recursive function - vector was being scrapped and created new again every recursive function