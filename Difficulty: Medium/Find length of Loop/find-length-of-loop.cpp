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
    int lenght(Node* slow,Node* fast)
    {
        int cnt=1;
        fast = fast->next;
        while(slow != fast)
        {
            cnt++;
            fast =fast->next;
        }
        return cnt;
    }
    int lengthOfLoop(Node *head) {
        // code here
        Node* curr = head;
        Node* slow = head;
        Node* fast = head;
        while(fast && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                return lenght(slow,fast);
            }
        }
        return 0;
    }
};