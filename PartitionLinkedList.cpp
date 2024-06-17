#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/

Node*findPartiton(Node*head, int x)
{
	// Write your code here
    /*
    // finding the partition
    Node *curr = head;
    while(curr -> data > x) {
        curr = curr -> next;
    }
    // keep the node as new head of the linked list
    Node *newHead = curr;
    // go to the last node
    while(curr -> next != NULL) {
        curr = curr -> next;
    }
    // assign the address of head of the linked list to the last node
    curr -> next = head;
    curr = head;
    // detach the attachment between the partition
    while(curr -> next != newHead) {
        curr = curr -> next;
    }
    curr -> next = NULL;
    // make the newHead as Head
    head = newHead;
    return head;
    */
    vector<int> lessThanX, greaterThanX;
    Node *curr = head;
    while(curr) {
        if(curr -> data >= x) greaterThanX.push_back(curr -> data);
        else lessThanX.push_back(curr -> data);
        curr = curr -> next;
    }
    curr = head;
    int i = 0;
    while(i < lessThanX.size()) {
        curr -> data = lessThanX[i++];
        curr = curr -> next;
    }
    i = 0;
    while(i < greaterThanX.size()) {
        curr -> data = greaterThanX[i++];
        curr = curr -> next;
    }
    return head;
}