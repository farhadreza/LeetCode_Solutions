
bool isPalindrome(ListNode* head) {      
        if(head==NULL || head->next==NULL) return true; 
        bool flag=true;
        helper(head, head->next,flag);
        return flag;
    }
    void helper(ListNode *&head, ListNode *tail, bool &flag){
        if(head==tail || head==tail->next) return;
        if(tail->next){
            helper(head,tail->next,flag);
        }
        if(head->val!=tail->val){
            flag=false;
            return;
        }
        head=head->next;      
}