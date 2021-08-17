//Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* r=NULL;
        ListNode* q=NULL;
        ListNode* p=head;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        return head;
    }
};