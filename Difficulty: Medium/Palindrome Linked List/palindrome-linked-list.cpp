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
    Node* reverse(Node* head)
    {
        Node* curr = head;
        Node* prev = nullptr;
        while(curr)
        {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    Node* findMid(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(Node *head) {
        //  code here
        Node* mid = findMid(head);
        Node* newHead = reverse(mid);
        Node* curr = head;
        while(newHead)
        {
            if(curr->data != newHead->data)
            {
                return false;
            }
            newHead = newHead->next;
            curr = curr->next;
        }
        return true;
    }
};







