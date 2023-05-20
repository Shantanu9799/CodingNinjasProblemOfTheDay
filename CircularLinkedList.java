import java.util.* ;
import java.io.*; 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        	int data;
	        Node next;
	        Node(int data)
	        {
		        this.data = data;
		        this.next = null;
	        }
	        
        }
        
*****************************************************************/

public class Solution 
{
	public static boolean circularLL(Node head) 
	{
		// Write your code here.
		Node fastPointer = head.next;
		Node slowPointer = head;
		while(fastPointer != null && fastPointer.next!=null) {
			if(fastPointer == slowPointer) {
				return true;
			}
			fastPointer = fastPointer.next.next;
			slowPointer = slowPointer.next;
		}
		return false;
	}
}