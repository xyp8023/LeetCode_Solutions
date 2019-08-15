#include <iostream>

using namespace std;


//  * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode* rTree;
        rTree = BST(t1, t2);
        return rTree;
    }
    TreeNode* BST(TreeNode* t1, TreeNode* t2){
        TreeNode* rTree  = new TreeNode(NULL);
        // TreeNode* rTree;

        if (t1 || t2){
            // cout << t1->val << endl;
            // cout << t2->val << endl;
            if (t1) rTree->val = t1->val;
            else if (t2) rTree->val = t2->val;
            else rTree->val = t1->val + t2->val;
            // TreeNode* rTree = new TreeNode(t1->val + t2->val);
            // cout << rTree->val << endl;
            // cout << (*rTree).val << endl;
            // if ((t1->val) && (!t2->val))  rTree->val = t1->val;
            // else rTree->val = 0;
            // else if ((t2->val) && (!t1->val)) rTree->val = t2->val;
            // else rTree->val = t1->val + t2->val;
            // BST(t1->left, t2->left);
            // BST(t1->right, t2->right);

        }
        return rTree;
    }

};

int main(){
    TreeNode* t1 = new TreeNode(1);
    t1->left = new TreeNode(3);
    t1->right = new TreeNode(2);
    t1->left->left = new TreeNode(5);

    TreeNode* t2 = new TreeNode(2);
    t2->left = new TreeNode(1);
    t2->right = new TreeNode(3);
    t2->left->right = new TreeNode(4);
    t2->right->right = new TreeNode(7);

    Solution sol;
    auto rTree = sol.mergeTrees(t1, t2);
    cout << rTree->val << endl;
    cin.get();
}