/*
Same Tree
Given the roots of two binary trees p and q, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
*/
/*
Example 1:
----------
Input: p = [1,2,3], q = [1,2,3]
Output: true
*/
/*
Example 2:
----------
Input: p = [1,2], q = [1,null,2]
Output: false
*/
/*
Example 3:
----------
Input: p = [1,2,1], q = [1,1,2]
Output: false
*/

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return true;
        else if(!p || !q)
            return false;
        else if(p->val != q->val)
            return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
