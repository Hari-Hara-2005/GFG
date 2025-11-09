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
    int lengthOfLoop(Node *head) {
        // code here
        int cnt=1;
        map<Node*,int>mp;
        Node* curr = head;
        while(curr)
        {
            if(mp.find(curr) != mp.end())
            {
                return cnt - mp[curr];
            }
            mp[curr] = cnt;
            cnt++;
            curr = curr->next;
        }
        return 0;
    }
};