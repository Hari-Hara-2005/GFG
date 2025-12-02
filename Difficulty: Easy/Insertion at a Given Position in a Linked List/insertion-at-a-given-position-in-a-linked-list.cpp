/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        Node* newNode = new Node(val);
        Node* curr = head;
        Node* prev = nullptr;
        int cnt = 1;
        if(pos == 1)
        {
            head = newNode;
            newNode->next = curr;
            return head;
        }
        while(curr)
        {
            cnt++;
            prev = curr;
            curr = curr->next;
            if(cnt == pos)
            {
                break;
            }
        }
        prev->next = newNode;
        newNode->next = curr;
        return head;
    }
};