// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    Node* findTail(Node* head)
    {
        Node* curr = head;
        while(curr->next != nullptr)
        {
            curr = curr->next;
        }
        return curr;
    }
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int, int>>ans;
        Node* left = head;
        Node* right = findTail(head);
        int sum = 0;
        while(left!=right &&left != right->next)
        {
            sum = left->data + right->data;
            if(sum == target)
            {
                ans.push_back({left->data,right->data});
                left = left->next;
                right = right->prev;
            }
            else if(sum<target)
            {
                left = left->next;
            }
            else{
                right = right->prev;
            }
        }
        return ans;
    }
};