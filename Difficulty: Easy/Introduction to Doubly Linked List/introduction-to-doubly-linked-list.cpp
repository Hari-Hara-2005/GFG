// User function Template for C++

/*
class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }

    Node(int value)
    {
        prev = NULL;
        data = value;
        next = NULL;
    }
};*/

class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i=1;i<arr.size();i++)
        {
            Node* newNode = new Node(arr[i]);
            mover->next = newNode;
            newNode->prev = mover;
            mover = newNode;
        }
        return head;
    }
};