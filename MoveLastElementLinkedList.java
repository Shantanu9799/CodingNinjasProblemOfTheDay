import java.util.* ;
import java.io.*; 

/*************************************************************************

    Following is the class structure of the LinkedListNode class:
	
	public class LinkedListNode {
	int data;
	LinkedListNode next;

	LinkedListNode(int data) {
		this.data = data;
		this.next = null;
	}
};

*************************************************************************/
public class Solution {

	public static LinkedListNode moveToFront(LinkedListNode head) {
		// Write your code here
		if(head == null || head.next == null) {
			return head;
		}
		LinkedListNode secondLastNode = head;
		LinkedListNode lastNode = head.next;
		while(lastNode.next != null) {
			secondLastNode = secondLastNode.next;
			lastNode = lastNode.next;
		}
		secondLastNode.next = null;
		lastNode.next = head;
		head = lastNode;
		return head;
	}

}
