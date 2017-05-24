/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
      
     
    ListNode temp1=new ListNode(0);
    ListNode node=new ListNode(0);
    temp1=node;
    int carry=0;
    int remainder=0;
        
    while(l1!=null||l2!=null||carry!=0)
    {
      
        temp1.val=(l1!=null?l1.val:0)+(l2!=null?l2.val:0)+carry;    
    
        carry=temp1.val/10;
      
            
        remainder=temp1.val%10;
          
        node=node.next=new ListNode(remainder);
        l1 = (l1 != null ? l1.next : null);
        l2 = (l2 != null ? l2.next : null);
    }
    return temp1.next;     
    }
}