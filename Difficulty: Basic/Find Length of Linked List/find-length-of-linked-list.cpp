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
        int n = 0;
        Node* curr = head;
        while(curr)
        {
            n++;
            curr = curr->next;
        }
        return n;
    }
};