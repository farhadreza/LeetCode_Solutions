/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
 
        if(head==NULL || head->next==NULL || n-m<=0)
         return head;
       
        int m_temp=m;
        n=n-m;
 
        ListNode dummy(0);
        dummy.next = head;
        
        ListNode* pre=&dummy;
        ListNode* prev=pre;
        ListNode* current=prev->next;
        
        ListNode* temp;
        
        while(m>1)
        {
            current=current->next;
            prev=prev->next;
            m--;
        }
        
        while(n--)
        {
           temp=current->next;
           current->next=temp->next;
           temp->next=prev->next;
           prev->next=temp;
           
        }
        return dummy.next;
         
    }
};