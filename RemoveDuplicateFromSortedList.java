/********************************************************

    Following is the class structure of the Node class:
    
    class Node
    {
        public:
            int data;
            Node next;
            Node(int data)
            {
                this.data = data;
                this.next = null;
            }
    };

********************************************************/

public class Solution {
    public static Node uniqueSortedList(Node head) {
        // Write your code here.
        if(head==null || head.next==null) {
            return head;
        }
        Node f = head;
        Node s = head;
        while(f != null) {
            if(s.data == f.data) {
                s.next = f.next;
                f = s.next;
            } else {
                f = f.next;
                s = s.next;
            }
            
        }
        return head;
    }
}