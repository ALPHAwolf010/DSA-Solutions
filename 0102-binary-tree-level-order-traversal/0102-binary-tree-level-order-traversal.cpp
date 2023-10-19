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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode *>q1;

        vector<vector<int>>ans;

        q1.push(root);
            
         while(q1.size())
          { 
            vector<int>v1;
            int siz=q1.size();
          //  q1.pop();
            for(int i=0;i<siz;i++)
             {
                 TreeNode *p=q1.front();
                 q1.pop();
                 if(p!=NULL)
                 v1.push_back(p->val);

                 if(p!=NULL and p->left!=NULL)
                    q1.push(p->left);
                 if(p!=NULL and p->right!=NULL)
                    q1.push(p->right);
             
            
             }   if(v1.size())  
                  ans.push_back(v1);
          }  
          return ans;
    }
};