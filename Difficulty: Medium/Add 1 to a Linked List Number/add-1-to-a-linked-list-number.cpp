/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
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
    Node* addOne(Node* head) {
        Node* newHead = reverse(head);
        Node* curr = newHead;
        int carry=1;
        while(curr)
        {
            int value = carry+curr->data;
            curr->data = value%10;
            carry = value/10;
            if(carry && curr->next == nullptr)
            {
                Node* temp = new Node(1);
                curr->next = temp;
                carry=0;
            }
            curr = curr->next;
        }
        return reverse(newHead);
    }
};