/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        Node* newNode = new Node(x);
        Node* prev = nullptr;
        int n = 0;
        Node* curr = head;
        if(head == nullptr)return newNode;
        while(curr)
        {
            n++;
            curr = curr->next;
        }
        int mid = 0;
        if(n%2 == 0)
        {
            mid = n/2;
        }
        else{
            mid = (n/2)+1;
        }
        n=1;
        curr = head;
        while(curr)
        {
            prev = curr;
            curr = curr->next;
            if(n == mid)
            {
                break;
            }
            n++;
        }
        prev->next = newNode;
        newNode->next = curr;
        return head;
    }
};