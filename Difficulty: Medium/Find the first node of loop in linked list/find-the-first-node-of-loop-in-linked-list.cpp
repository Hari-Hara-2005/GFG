/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        // code here
        map<Node*,int>mp;
        Node* curr = head;
        while(curr)
        {
            if(mp.find(curr) != mp.end())
            {
                return curr->data;
            }
            mp[curr]++;
            curr = curr->next;
        }
        return -1;
    }
};