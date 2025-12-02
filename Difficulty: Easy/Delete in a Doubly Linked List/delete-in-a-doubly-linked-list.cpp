/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
        Node* curr = head;
        int cnt =1;
        if(x==1)
        {
            head = curr->next;
            curr->next->prev = nullptr;
            delete curr;
            return head;
        }
        while(curr != nullptr && cnt<x)
        {
            curr = curr->next;
            cnt++;
        }
        curr->prev->next = curr->next;
        if(curr->next != nullptr)
        {
             curr->next->prev = curr->prev;
        }
        delete curr;
        return head;
    }
};