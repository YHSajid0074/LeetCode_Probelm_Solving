class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* newHead = new ListNode(0);
        ListNode* newTemp = newHead;

        while(temp != NULL)
        {
            if(temp-> val != val)
            {
                newTemp-> next = new ListNode(temp-> val);
                newTemp = newTemp-> next;
            }
            temp = temp-> next;
        }
        return newHead-> next;
    }
};