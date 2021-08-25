//Middle of the Linked List
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* ptr=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        for(int i=0;i<count/2;i++)
            ptr=ptr->next;
        return ptr;
    }
};