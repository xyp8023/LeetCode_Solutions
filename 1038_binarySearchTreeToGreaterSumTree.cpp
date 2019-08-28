#include<iostream>
#include<string>
#include <vector>
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
    int seen = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if (root->right){
            this->bstToGst(root->right);
        }
        this->seen+=root->val;
        root->val = this->seen;
        if (root->left){
            this->bstToGst(root->left);
        }
        return root;
        
    }
};


int main(){
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(1);
    root->right = new TreeNode(6);

    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(2);
    root->left->right->right = new TreeNode(3);

    root->right->left= new TreeNode(5);
    root->right->right = new TreeNode(7);
    root->right->right->right = new TreeNode(8);


    Solution sol;


    auto gst_root = sol.bstToGst(root);
    return 0;
}