/*
class Node {
  public:
    int data;
    Node* next;
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
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        Node* p = reverse(head1);
        Node* q = reverse(head2);
        Node* curr1 = p;
        Node* curr2 = q;
        Node* newNode = new Node(-1);
        Node* dummyNode = newNode;
        int carry=0,value=0;
        while(curr1 && curr2)
        {
            value = curr1->data + curr2->data + carry;
            Node* temp = new Node(value % 10);
            carry = value / 10;
            dummyNode->next = temp;
            dummyNode = temp;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        while(curr1)
        {
            value = curr1->data + carry;
            Node* temp = new Node(value % 10);
            carry = value / 10;
            dummyNode->next = temp;
            dummyNode = temp;
            curr1 = curr1->next;
        }
        while(curr2)
        {
            value = curr2->data + carry;
            Node* temp = new Node(value % 10);
            carry = value / 10;
            dummyNode->next = temp;
            dummyNode = temp;
            curr2 = curr2->next;
        }
        if(carry)
        {
            Node* temp = new Node(carry);
            dummyNode->next = temp;
            dummyNode = temp;
        }
        
        Node* result = reverse(newNode->next);
          while (result && result->data == 0 && result->next != nullptr) {
        result = result->next;
    }
        return result;
    }
};












