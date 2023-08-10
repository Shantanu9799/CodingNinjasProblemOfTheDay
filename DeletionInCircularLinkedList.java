/*

    Following is the representation of the Circular Linked List
    
    class Node<T> {
        T data;
        Node<T> next;
        
        public Node(T data) {
            this.data = data;
        }
    }

*/

public class Solution {

    public static Node<Integer> deleteNode(Node<Integer> head, int key) {
        // Your code goes here
        if (head == null) {
            return head;
        }

        Node<Integer> slow = head;
        Node<Integer> fast = head.next;
        if (slow == fast && slow.data == key) {
            return null;
        }
        if (head.data == key) {
            while (slow != fast) {
                slow = slow.next;
                fast = fast.next.next;
            }
            head = head.next;
            slow.next = head;
            return head;
        }

        while (slow != fast) {
            if (slow == fast && slow.data == key) {
                return null;
            }
            if (slow.data == key) {
                Node<Integer> prev = head;
                Node<Integer> curr = head.next;
                while (curr != slow) {
                    prev = prev.next;
                    curr = curr.next;
                }
                prev.next = curr.next;
                return head;
            }
            slow = slow.next;
            fast = fast.next.next;
        }
        if (slow.data == key) {
            Node<Integer> prev = head;
            while (prev.next != slow) {
                prev = prev.next;
            }
            prev.next = head;
        }

        return head;
    }
}