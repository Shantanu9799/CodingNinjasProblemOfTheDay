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
#include<bits/stdc++.h>

Node *reverseLinkedList(Node *head) {
    if(head==NULL || head -> next==NULL) return head;

    Node *remainingList = reverseLinkedList(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    
    return remainingList;
}

int binaryToInteger(int n, Node *head) {
    //    Write your code here
    head = reverseLinkedList(head);
    int num = 0;
    int power = 0;
    Node *currNode = head;
    while(currNode != NULL) {
        num += (currNode -> data * (int) pow(2, power));
        power++;
        currNode = currNode -> next;
    }
    return num;
}