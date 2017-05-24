/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode ln1=l1;
        ListNode ln2=l2;
            
        ListNode head=null;
        ListNode node=null;
        head=new ListNode(0);
        node=new ListNode(0);
        node=head;
        
        while(ln1!=null&&ln2!=null){
            
            if(ln1.val<=ln2.val)
            {
                node.next=ln1;
                ln1=ln1.next;
            }
            
            else
            {
                node.next=ln2;
                ln2=ln2.next;
            }
            
            node=node.next;

        }
        
        if (ln1 != null) {
            node.next = ln1;
        }
        if (ln2 != null) {
            node.next = ln2;
        }
        
        return head.next;
        
    }
}