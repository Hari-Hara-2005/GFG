/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node* curr = head;
        int index=0;
        while(curr)
        {
            index++;
            curr = curr->next;
        }
        int mid = index/2;
        curr = head;
        index = 0;
        while(curr)
        {
            if(mid == index)
            {
                return curr->data;
            }
            curr = curr->next;
            index++;
        }
        return -1;
    }
};