class Solution {
public:
    ListNode *findFirstCommonNode(ListNode *headA, ListNode *headB) {
        //要求第一个公共结点，这也就意味着从那个公共结点之后开始，结点都相同，因此只要判断逆序中对应的结点是否相等即可。
        if(headA == NULL || headB == NULL){
            return NULL;
        }
        //测出两个链表的长度
        int lenA = 0, lenB = 0;
        ListNode *p = headA;
        while(p != NULL){
            lenA++;
            p = p->next;
        }
        p = headB;
        while(p != NULL){
            lenB++;
            p = p->next;
        }
        
        //将长度更长的链表截掉前面的结点使得两个链表的长度相等
        if(lenA > lenB){
            int tmp = lenA - lenB;
            while(tmp--){
                headA = headA->next;
            }
        }else{
            int tmp = lenB - lenA;
            while(tmp--){
                headB = headB->next;
            }
        }
        //寻找第一个公共结点
        while(headA != NULL){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};