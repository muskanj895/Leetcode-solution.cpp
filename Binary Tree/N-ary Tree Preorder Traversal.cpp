/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        stack<Node*> s;
         vector<int> result;
        s.push(root);
        while(!s.empty())
        {
            Node* curr = s.top();
            s.pop();
        
if(curr != NULL)
{
   
    result.push_back(curr->val);
    vector<Node*>::iterator it = curr->children.end();
    while (it != curr->children.begin()) {
            it--;
            s.push(*it);
}
}
        }
            return result;
        
    }
};
