#include <iostream>
#include <string>
#include <vector>
#include <stack> 
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

// recursive solution
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> traversal;
        int i;
        if (root) {
            traversal.push_back(root->val);
            i=0;
            while (i< root->children.size()){
                vector<int> _traversal = preorder(root->children[i]);
                traversal.insert(traversal.end(), _traversal.begin(), _traversal.end());
                ++i;
            }
        }
        return traversal;
    }
};

// iterative solution
/* 
Using an explicit stack
1. Create an empty stack and push the root node to stack
2. Loop while the stack is not empty:
    2.1 Pop an item from stack and push_back to the vector
    2.2 push the children of popped item to stack in reverse order (from the very right to the very left)
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> traversal;
        stack<Node*> nodeStack;
        
        if (root) {
            nodeStack.push(root);
            while (nodeStack.empty()==false){
            Node* node = nodeStack.top();
            traversal.push_back(node->val);
            nodeStack.pop();
            // for (int i = node->children.size()-1; i>=0; --i ){
            //     nodeStack.push(node->children[i]);
            // }
            for (auto it=node->children.rbegin(); it!=node->children.rend(); ++it){
                nodeStack.push(*it);
            }
            }
        }
        return traversal;
    }
};