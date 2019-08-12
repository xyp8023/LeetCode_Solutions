#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;


//  Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

// solution 1
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        unsigned int res = 0;
        res+=preOrder(root, L, R);
        return res;
    }
    unsigned int preOrder(TreeNode* root, int L, int R){
        unsigned int res = 0;
        if (root){
            if ((L<=root->val)&&(root->val<=R)){
                res+=root->val;
            }
            res+=preOrder(root->left, L, R);
            res+=preOrder(root->right, L, R);

        }
        return res;
    }
};
int main(){
    TreeNode* node = new TreeNode(10);
    node->left = new TreeNode(5);
    node->left->left = new TreeNode(15);
    node->left->right = new TreeNode(3);

    node->right = new TreeNode(7);
    // node->right->right = new TreeNode(NULL);
    node->right->right = new TreeNode(18);

    Solution sol;
    int L = 7;
    int R = 15;
    unsigned int res = sol.rangeSumBST(node, L, R);
    cout << res << endl; // 32
    cin.get();

    return 0;
}

