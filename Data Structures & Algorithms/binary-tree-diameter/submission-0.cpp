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
    int  diameter(TreeNode* root, int &maxD){
        if(!root)return 0;
        int left = diameter(root->left,maxD);
        int right = diameter(root->right,maxD);
        maxD=max(left+right,maxD);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxD = 0;
        diameter(root,maxD);
        return maxD;
    }
};
