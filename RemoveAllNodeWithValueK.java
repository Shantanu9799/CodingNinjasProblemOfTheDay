import java.util.* ;
import java.io.*; 
/****************************************************************
    Following is the Linked List node structure

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

public class Solution {
    public static Node removeNodes(Node head, int k) {
        // Write your code here.
        
        while(head!=null && head.data == k) {
            head = head.next;
        }
        Node deletedNode = head;
        while(deletedNode != null && deletedNode.next!=null) {
            if(deletedNode.next.data == k) {
                deletedNode.next = deletedNode.next.next;
            } else {
                deletedNode = deletedNode.next;
            }
        }
        return head;
    }
}