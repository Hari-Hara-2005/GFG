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
    bool isPalindrome(Node *head) {
        //  code here
        stack<int>st;
        Node* curr = head;
        while(curr)
        {
            st.push(curr->data);
            curr = curr->next;
        }
        curr = head;
        while(curr)
        {
            if(curr->data != st.top())return false;
            st.pop();
            curr = curr->next;
        }
        return true;
    }
};