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
        if(arr.empty())return nullptr;
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1;i<arr.size();i++)
        {
            Node* newNode = new Node(arr[i]);
            mover->bottom = newNode;
            mover = newNode;
        }
        return head;
    }
    Node *flatten(Node *root) {
        // code here
        Node* temp1 = root;
        vector<int>arr;
        while(temp1)
        {
            Node* temp2 = temp1->bottom;
            while(temp2)
            {
                arr.push_back(temp2->data);
                temp2 = temp2->bottom;
            }
            arr.push_back(temp1->data);
            temp1 = temp1->next;
        }
        sort(arr.begin(),arr.end());
        return convert(arr);
    }
};