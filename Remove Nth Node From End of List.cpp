//Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* ans=head;
        ListNode* check=head;
        while(head){
            size++;
            head=head->next;
        }
        if(size==1) return NULL;
        if(size <= n){
            return ans->next;
        }
        for(int i=1;i<size-n;i++){
            check=check->next;
        }
        check->next=check->next->next;
       return ans;
    }
};