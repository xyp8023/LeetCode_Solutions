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
        if (!t1){
            return t2;
        }
        if (!t2){
            return t1;
        }
        t1->val += t2->val;
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        return t1;
    }

    void preOrder(TreeNode* tree){
        if (tree){
            cout << tree->val;
            preOrder(tree->left);
            preOrder(tree->right);
        }
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
    TreeNode* rTree;
    rTree = sol.mergeTrees(t1, t2);
    sol.preOrder(rTree);
    // cout << rTree->val << endl;
    cin.get();
}