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
    int getCount(Node* head) {
        // Code here
        Node* curr = head;
        int cnt = 0;
        while(curr)
        {
            cnt++;
            curr = curr->next;
        }
        return cnt;
    }
};