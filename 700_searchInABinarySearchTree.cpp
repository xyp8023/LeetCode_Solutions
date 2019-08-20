#include <iostream>
#include <string>
#include <vector>


// Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

using namespace std;

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root==NULL) return NULL;
        else if (root->val==val) return root;
        else if (root->val <val) return searchBST(root->right, val);
        else {
            return searchBST(root->left, val);
        }
        
    }


};

int main(){
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right = new TreeNode(7);
    Solution sol;
    auto res = sol.searchBST(root, 2);
    cout << res->val<< endl;
    cin.get();
    return 0;
}