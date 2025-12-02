/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        Node* curr = head;
        Node* deleteNode = nullptr;
        Node* prev = nullptr;
        int cnt=1;
        if(head == nullptr)return nullptr;
        if(x == 1)
        {
            head = curr->next;
            delete curr;
            return head;
        }
        while(curr)
        {
            if(cnt == x)
            {
                deleteNode = curr;
                break;
            }
            cnt++;
            prev = curr;
            curr = curr->next;
        }
        prev->next = deleteNode->next;
        delete deleteNode;
        return head;
    }
};