//Linked List Cycle
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* p=head;
        ListNode* q=head;
        if(head==NULL) return false;
        if(head->next==NULL) return false;
        do
        {
            p=p->next;
            q=q->next;
            if(q)
                q=q->next;
            else
                q=NULL;
        } while(p && q && p!=q);
        if(p==q) return 1;
        else return 0;
    }
};