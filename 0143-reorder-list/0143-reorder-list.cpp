class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head) return;
        
        ListNode *temp = head; 
        ListNode *mid = head; 
        ListNode *previous = nullptr;

        while (temp -> next && temp -> next -> next) {
            temp = temp->next->next;
            mid = mid->next;
        }
        
        if (temp->next) mid = mid->next;
        
        while (mid) {
            temp = mid->next;
            mid->next = previous;
            previous = mid;
            mid = temp;
        }
        mid = previous;
        
        while (head && mid) {
            temp = head->next;
            previous = mid->next;
            head->next = mid;
            mid->next = temp;
            head = temp;
            mid = previous;
        }
        
        if (head && head->next) head->next->next = NULL;
    }
};