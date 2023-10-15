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

   void dfs(TreeNode* root, vector<int>&l1)
      {
          if(root==NULL)
            return;
          dfs(root->left, l1);  
            l1.push_back(root->val);
          dfs(root->right, l1);  
      }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>l1;
       dfs(root1,l1);
       dfs(root2,l1);
       sort(l1.begin(),l1.end())    ;
       return l1;
    }
};