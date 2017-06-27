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
    bool hasCycle(ListNode *head) {
        
    if(head==NULL) return NULL;
    
    ListNode* temp=head;
    map<ListNode*, bool> list;
    
    map<ListNode*, bool>::iterator it;
    
    list.insert(pair<ListNode*, bool>(temp,1));
    while(temp->next!=NULL)
    {
        
       it = list.find(temp->next);
       
       if (it != list.end())
        {
           return temp->next; 
        }
        temp=temp->next;
        list.insert(pair<ListNode*, bool>(temp,1));
               
    }
    return NULL;
        
    }
};