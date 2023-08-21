import java.util.* ;
import java.io.*; 

/************************************************************

 Following is the linkedList class structure:

 class Node<T> {
 T data;
 Node<T> next;

 public Node(T data) {
 this.data = data;
 }
 }

 ************************************************************/

public class Solution {

    static Node insert(Node head, int n, int pos, int val) {
        // Write your code here.
        Node newNode = new Node(val);
        
        if(pos == 0) {
            newNode.next = head;
            head = newNode;
        }

        Node currentNode = head;
        while(pos-- > 1) {
            currentNode = currentNode.next;
        }

        Node nextNode = currentNode.next;
        currentNode.next = newNode;
        newNode.next = nextNode;
        
        return head;
    }
}