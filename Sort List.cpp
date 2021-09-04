//Sort List
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int> values;
        while(head)
        {
            values.push_back(head->val);
            head=head->next;
        }
        sort(values.begin(),values.end());
        ListNode* answer=new ListNode(values[0]);
        ListNode* temp=answer;
        for(int i=1;i<values.size();i++)
        {
            answer->next=new ListNode(values[i]);
            answer=answer->next;
        }
        return temp;
    }
};