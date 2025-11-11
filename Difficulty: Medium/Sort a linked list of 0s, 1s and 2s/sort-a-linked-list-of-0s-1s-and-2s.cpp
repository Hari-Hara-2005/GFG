/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(head == nullptr || head->next == nullptr)return head;
        Node* curr =  head;
        int cnt0=0,cnt1=0,cnt2=0;
        while(curr)
        {
            if(curr->data == 0)
            {
                cnt0++;
            }
            else if (curr->data == 1)
            {
                cnt1++;
            }
            else{
                cnt2++;
            }
            curr = curr->next;
        }
        curr = head;
        while(curr)
        {
            if(cnt0)
            {
                curr->data  = 0;
                cnt0--;
            }
            else if(cnt1)
            {
                curr->data =  1;
                cnt1--;
            }
            else{
                curr->data = 2;
                cnt2--;
            }
            curr = curr->next;
        }
        return head;
    }
};