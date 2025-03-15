/*
Symmetric Tree
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).
*/
/*
Example 1:
----------
Input: root = [1,2,2,3,4,4,3]
Output: true
*/
/*
Example 2:
----------
Input: root = [1,2,2,null,3,null,3]
Output: false
*/

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        stack<TreeNode*> stk;
        stk.push(root->left);
        stk.push(root->right);
        while(!stk.empty()){
            TreeNode* t1 = stk.top();
            stk.pop();
            TreeNode* t2 = stk.top();
            stk.pop();
            if(!t1 && !t2)
                continue;
            if(!t1 || !t2 || t1->val != t2->val)
                return false;
            stk.push(t1->left);
            stk.push(t2->right);
            stk.push(t1->right);
            stk.push(t2->left);
        }
        return true;
    }
};
