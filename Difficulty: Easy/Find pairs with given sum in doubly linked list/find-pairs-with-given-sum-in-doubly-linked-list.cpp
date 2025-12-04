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
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int, int>>st;
        map<int,int>mp;
        Node* curr = head;
        while(curr)
        {
            int x = target - curr->data; 
            if(mp.find(x) != mp.end())
            {
                st.push_back({x,curr->data});
            }
            mp[curr->data]++;
            curr = curr->next;
        }
        sort(st.begin(),st.end());
        return st;
    }
};