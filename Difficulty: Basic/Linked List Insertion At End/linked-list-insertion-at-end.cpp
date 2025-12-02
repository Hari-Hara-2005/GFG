/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* curr = head;
        Node* newNode =new Node(x);
        if(head == nullptr)
        {
            head = newNode;
            return head;
        }
        while(curr->next != nullptr)
        {
            
            curr = curr->next;
        }
        curr->next = newNode;
        return head;
    }
};