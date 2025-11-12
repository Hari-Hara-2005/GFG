/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        // Your code here
      Node* curr = head;
      curr = curr->next;
      Node* prev = head;
      while(curr)
      {
          if(curr->data != prev->data)
          {
            prev->next = curr;
            curr->prev = prev;
            prev = curr;
          }
          curr = curr->next;
      }
       prev->next = nullptr;
      return head;
    }
};