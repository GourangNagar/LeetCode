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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int ans=0;
        queue<pair<TreeNode* , unsigned long long int>> q;
        q.push({root,0});
        while(!q.empty())
        {
            ans = max(ans,int(q.back().second - q.front().second +1) );
            int size = q.size();
            while(size--)
            {
                TreeNode* curr = q.front().first;
                unsigned long long int cur = q.front().second;
                q.pop();
                
                if(curr->left)
                    q.push({curr->left,cur*2});
                if(curr->right)
                    q.push({curr->right,cur*2+1});
            }
        }
        return ans;        
    }
};
