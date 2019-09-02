#include <string>
using namespace std;


//   Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if (root==NULL){
//             return NULL;
//         }
//         else if (root->val<=val){
//             root = insertIntoBST(root->right, val);
//         }
//         // else if ((root->val>val)&&(root->left==NULL)){
//         else {
//             if (root->left==NULL){
//                 root->left=new TreeNode(val);
//                 return root;
//             }
//             else root = insertIntoBST(root, val);
//         }
//             // root->left = new TreeNode(val);
//             // return root;
//         // }
//     }
// };


class Solution {
public:
    // int flag = 0;    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insert(root, val);
        return root;
    }

    void insert(TreeNode* root, int val){
        if (root!=NULL){
            if (root->val < val){
                if (root->right==NULL){
                    root->right = new TreeNode(val);
                }

                else insert(root->right, val);
            }
            else {
                if (root->left == NULL){
                root->left = new TreeNode(val);
                }
                else insert(root->left, val);
            }
        }
    }
};

int main(){
    TreeNode* root = new TreeNode(61);
    root->left = new TreeNode(46);
    root->right = new TreeNode(66);

    root->left->left = new TreeNode(10);
    root->left->right = new TreeNode(30);
    // root->left->right->right = new TreeNode(3);

    root->right->left= new TreeNode(50);
    root->right->right = new TreeNode(70);
    // root->right->right->right = new TreeNode(8);
    /*
            61
        46           66
    43    null   null    null
39     null null null null
    */

    Solution sol;


    auto gst_root = sol.insertIntoBST(root, 25);
    return 0;
}