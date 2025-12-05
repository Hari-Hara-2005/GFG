/*
class Node {
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
    int lenght(Node* head)
    {
        Node* curr = head;
        int idx = 0;
        while(curr)
        {
            idx++;
            curr = curr->next;
        }
        return idx;
    }
    Node* rotate(Node* head, int k) {
        // code here
        if(head==nullptr || head->next == nullptr)return head;
        Node* curr =  head;
        Node* newNode =  new Node(-1);
        Node* dummyNode = newNode;
        Node* newHead = nullptr;
        int idx=0;
        int n = lenght(head); 
        k = k%n;
        if(k==0)return head;
        while(curr->next != nullptr)
        {
            idx++;
            if(idx <= k){
            dummyNode->next = curr;
            dummyNode = curr;
            }
            curr = curr->next;
        }
        newHead = dummyNode->next;
        dummyNode->next = nullptr;
        curr->next = newNode->next;
        return newHead;
    }
};