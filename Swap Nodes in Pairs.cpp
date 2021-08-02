//Swap Nodes in Pairs
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;
        
        int temp=0;
        ptr1=ptr1->next;
        int count=1;
        while(ptr1)
        {
            count++;
            if(count%2==0)
            {
                temp=ptr1->val;
                ptr1->val=ptr2->val;
                ptr2->val=temp;
                ptr1=ptr1->next;
                ptr2=ptr2->next;
            }
            else
            {ptr1=ptr1->next;
                ptr2=ptr2->next;}
        }
        return head;
    }
};