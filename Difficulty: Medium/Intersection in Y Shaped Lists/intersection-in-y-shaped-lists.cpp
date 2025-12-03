/*
class Node {
public:
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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        map<Node*,int>mp;
        Node* curr1 = head1;
        Node* curr2 = head2;
        while(curr1)
        {
            mp[curr1]++;
            curr1 = curr1->next;
        }
        while(curr2)
        {
            if(mp.find(curr2)!= mp.end())return curr2;
            curr2 = curr2->next;
        }
        return nullptr;
    }
};