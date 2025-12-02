/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        Node* curr = head;
        stack<int>st;
        while(curr)
        {
            st.push(curr->data);
            curr = curr->next;
        }
        curr = head;
        while(curr)
        {
            curr->data = st.top();
            st.pop();
            curr = curr->next;
        }
        return head;
    }
};