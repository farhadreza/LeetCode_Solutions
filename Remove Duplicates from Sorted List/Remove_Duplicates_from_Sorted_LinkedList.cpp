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
    ListNode* deleteDuplicates(ListNode* head) {
        
    if(head==NULL) return NULL;
    if(head->next==NULL) return head;
    ListNode* duprem=head;
    while(duprem->next!=NULL)
    {       
        if(duprem->val == duprem->next->val)
        {         
            ListNode* temp=duprem->next;
            duprem->next=temp->next;
            temp =NULL;
            delete temp;
           
        }
        
        else
        {
           duprem=duprem->next; 
        }

    }
    return head;
        
    }
};