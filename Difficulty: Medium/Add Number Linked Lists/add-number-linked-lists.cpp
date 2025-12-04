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
        Node* newNode = new Node(-1);
        Node* dummyNode =newNode;
        Node* newHead1 = reverse(head1);
        Node* newHead2 = reverse(head2);
        Node* curr1 = newHead1;
        Node* curr2 = newHead2;
        int carr = 0,val =0;
        while(curr1 && curr2)
        {
            val = curr1->data + curr2->data + carr;
            Node* temp = new Node(val%10);
            dummyNode->next = temp;
            dummyNode = temp; 
            carr = val/10;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        while(curr1)
        {
            val = curr1->data + carr;
            Node* temp = new Node(val%10);
            dummyNode->next = temp;
            dummyNode = temp; 
            carr = val/10;
            curr1 = curr1->next;
        }
        while(curr2)
        {
            val = curr2->data + carr;
            Node* temp = new Node(val%10);
            dummyNode->next = temp;
            dummyNode = temp; 
            carr = val/10;
            curr2 = curr2->next;
        }
        if(carr)
        {
            Node* temp = new Node(carr); 
            dummyNode->next = temp;
            dummyNode = temp;
        }
        Node* res = reverse(newNode->next);
        while(res && res != nullptr && res->data == 0)
        {
            res = res->next;
        }
        return res;
    }
};