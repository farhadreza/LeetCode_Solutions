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
    ListNode *detectCycle(ListNode *head) {
        
    if(head==NULL) return NULL;
    
    bool cycle=false;
    
    ListNode* first=head;
    ListNode* second=head;
    
    while(first!=NULL && second!=NULL)
    {
        first=first->next;
        if(second->next==NULL || second->next->next==NULL)
        {
              return NULL;
        }
        second=second->next->next;
         
        if(first==second)
        {
            cycle=true;
            break;
        }
        
    }
    
    if(cycle)
    {
        second=head;
        while(first!=second)
        {
            if(first==second)
              break;
            first=first->next;
            second=second->next;
        }
        return second;
    }
    
   
    return NULL;
        
    }
};