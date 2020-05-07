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
    vector<int> findInfo(TreeNode* root, int x, int level, int parent)
    {
        if(root == NULL)
            return {-1,-1};
        if(root->val == x)
            return {level, parent};
        vector<int> xInfo = findInfo(root->left, x, level+1, root->val);
        vector<int> yInfo = findInfo(root->right, x, level+1, root->val);
        if(xInfo[0]!=-1)
            return xInfo;
        else
            return yInfo;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        vector<int> xInfo = findInfo(root, x, 0, root->val);
        vector<int> yInfo = findInfo(root, y, 0, root->val);
        if((xInfo[0]==yInfo[0])&&(xInfo[1]!=yInfo[1]))
            return true;
        return false;
    }
};
