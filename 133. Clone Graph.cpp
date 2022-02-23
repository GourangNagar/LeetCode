/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node) return NULL;
        unordered_map<Node*,Node*> mp;
        mp[node] = new Node(node->val);
        queue<Node*> q;
        q.push(node);
        while(!q.empty())
        {
            Node* temp = q.front();
            q.pop();
            for(auto side :temp->neighbors)
            {
                if(mp.find(side)==mp.end())
                {
                    mp[side]=new Node(side->val);
                    q.push(side);
                }
             mp[temp]->neighbors.push_back(mp[side]);
            }
        }
        return mp[node];
    }
};
