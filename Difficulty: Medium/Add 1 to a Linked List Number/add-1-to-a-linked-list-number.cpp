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
    Node* addOne(Node* head) {
        // Your Code here
        Node* curr = head;
        curr = reverse(curr);
        int carry =1;
        int sum = 0;
        while(curr)
        {
            sum = (curr->data + carry);
            if(sum>=10)
            {
                carry = 1;
                curr->data = (sum%10);
            }
            else{
                carry=0;
                curr->data = sum;
            }
            curr = curr->next;
        }
        curr = reverse(head);
        if(carry == 1)
        {
            Node* newNode = new Node(carry);
            head = newNode;
            newNode->next = curr;
        }
        return head;
        // return head of list after adding one
    }
};