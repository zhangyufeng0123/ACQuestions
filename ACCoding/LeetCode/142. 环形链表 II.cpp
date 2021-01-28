class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)    return NULL;
        //int times = 0;
        ListNode *fast = head, *slow = head;
        while(1){
            if(fast->next == NULL || fast->next->next == NULL)  return NULL;
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)    break;
        }
        fast = head;
        while(fast != slow){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};