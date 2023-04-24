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
	public static Node nthNodeFromEnd(Node head, int n) 
	{
		// Write your code here.
		int m = 0;
		Node curr = head;
		while(curr != null) {
			m++;
			curr = curr.next;
		}
		n = m-n+1;
		Node ans = head;
		while(n-- > 1) {
			ans = ans.next;
		}
		return ans;
	}
}
