class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = nullptr;
        ListNode* currentNode = head;
        ListNode* nextNode = nullptr;

        while (currentNode != nullptr) {
            nextNode = currentNode -> next;
            currentNode -> next = prevNode;
            prevNode = currentNode;
            currentNode = nextNode;
        }

        return prevNode;
    }
};