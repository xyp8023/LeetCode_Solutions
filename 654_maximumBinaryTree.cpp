#include <iostream>
#include <vector>
# include <algorithm>

using namespace std;



//  Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        // auto max = max_element(begin(nums), end(nums));
        if (!nums.empty()){
        auto max = max_element(nums.begin(), nums.end());
        int index = max - nums.begin();
        TreeNode* root = new TreeNode(*max);
        vector<int> left_nums(&*nums.begin(), &nums[index]);
        root->left = this->constructMaximumBinaryTree(left_nums);
        vector<int> right_nums(&nums[index+1], &*nums.end());
        root->right = this->constructMaximumBinaryTree(right_nums);
        return root;
        }
        else return NULL;

    }
};

int main(){
    vector<int> nums = {3,2,1,6,0,5};
    Solution sol;
    auto it = sol.constructMaximumBinaryTree(nums);
    return 0;
}