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
// iterative solution
/*
using two stacks: The idea is to push reverse postorder traversal to the second stack, so when pop all items one by one, it is postorder.
1. push root to first stack
2 Loop while first stack is not empty
    2.1 Pop a node from the first stack and push it to second stack
    2.2 Push all childre of the popped node to first stack
3. push_back the cotent of second stack into the vector
*/
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> traversal;
        stack<Node*> nodeStack1;
        stack<Node*> nodeStack2;
        if (root){
            nodeStack1.push(root);
            while (nodeStack1.empty()==false){
                Node* node = nodeStack1.top();
                nodeStack2.push(node);
                nodeStack1.pop();
                for (auto it = node->children.begin(); it!=node->children.end(); ++it){
                nodeStack1.push(*it);
            }
            }
        }
        while (nodeStack2.empty()==false){
            traversal.push_back(nodeStack2.top()->val);
            nodeStack2.pop();
        }
        
        return traversal;
    }
};

int main(){
    Node* child11 = new Node(5,{});
    Node* child12 = new Node(6,{});

    Node* child1 = new Node(3,{child11, child12});
    Node* child2 = new Node(2,{});
    Node* child3 = new Node(4,{});

    Node* root = new Node(1, {child1, child2, child3});

    Solution sol;
    vector<int> traversal = sol.postorder(root);

    return 0;
}