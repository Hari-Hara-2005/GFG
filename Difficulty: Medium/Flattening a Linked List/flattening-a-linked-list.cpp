/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node* convert(vector<int>arr)
    {
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1;i<arr.size();i++)
        {
            Node* temp = new Node(arr[i]);
            mover->bottom = temp;
            mover = temp;
        }
        return head;
    }
    Node *flatten(Node *root) {
        // code here
        Node* curr1 = root;
        vector<int>arr;
        while(curr1)
        {
            Node* curr2 = curr1->bottom;
            while(curr2)
            {
                arr.push_back(curr2->data);
                curr2 = curr2->bottom;
            }
            arr.push_back(curr1->data);
            curr1 = curr1->next;
        }
        sort(arr.begin(),arr.end());
        return convert(arr);
    }
};