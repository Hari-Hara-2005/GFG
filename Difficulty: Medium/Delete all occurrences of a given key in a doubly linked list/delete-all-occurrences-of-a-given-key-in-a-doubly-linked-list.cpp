class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head, int x) {
        if (!head || !(*head)) return; 

        Node* curr = *head;
        
        while (curr) {
            if (curr->data == x) {
                Node* toDelete = curr;

        
                if (curr == *head) {
                    *head = curr->next;
                    if (*head) {
                        (*head)->prev = nullptr;
                    }
                }
              
                else {
                    if (curr->prev)
                        curr->prev->next = curr->next;
                    if (curr->next)
                        curr->next->prev = curr->prev;
                }

                curr = curr->next;
                delete toDelete;
            } else {
                curr = curr->next;
            }
        }
    }
};
