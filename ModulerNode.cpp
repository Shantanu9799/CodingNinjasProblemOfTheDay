#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

Node* modularNode(int k, Node* head) {
    // Write your code here.
    int x = 1;
    Node* curr = head, *lastNode = head;
    while(curr != NULL) {
        if(x%k == 0) lastNode = curr;
        curr = curr -> next;
        x++;
    }
    return lastNode;
}