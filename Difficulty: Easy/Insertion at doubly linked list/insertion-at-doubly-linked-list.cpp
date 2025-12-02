/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/
class Solution {
public:
    Node *insertAtPos(Node *head, int p, int x) {
        Node* newNode = new Node(x);

        if (head == nullptr)
            return newNode;

        Node* curr = head;
        int index = 0;
        while (curr != nullptr && index < p) {
            curr = curr->next;
            index++;
        }
        newNode->next = curr->next;
        newNode->prev = curr;
        if (curr->next != nullptr)
            curr->next->prev = newNode;

        curr->next = newNode;

        return head;
    }
};
