/*
Average of Levels in Binary Tree
Given the root of a binary tree, return the average value of the nodes on each level in the form of an array. Answers within 10^-5 of the actual answer will be accepted.
*/
/*
Example 1:
----------
Input: root = [3,9,20,null,null,15,7]
Output: [3.00000,14.50000,11.00000]
Explanation: The average value of nodes on level 0 is 3, on level 1 is 14.5, and on level 2 is 11.
Hence return [3, 14.5, 11].
*/
/*
Example 2:
----------
Input: root = [3,9,20,15,7]
Output: [3.00000,14.50000,11.00000]
*/

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        queue<TreeNode*> q;
        if(!root)
            return res;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            double sum = 0;
            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                sum+=node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            res.push_back(sum/n);
        }
        return res;
    }
};
