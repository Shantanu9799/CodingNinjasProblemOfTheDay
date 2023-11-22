#include <bits/stdc++.h> 
/************************************************
   
   Following is the linkedList class structure:

   class List {
    public:
        int data;
        List *next;
        List() {};
        List(int v){
            data = v;
            next = NULL;
        };
   };

*************************************************/

List* noLoop(List *head , int k) {
   // Write your code here.
   if(k == 0) return NULL;
    List* slow = head;
    List* fast = head;
    while (fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) break;
    }
    List* currNode = slow;
    List *start = head;
    while (start != currNode) {
        start = start->next;
        currNode = currNode->next;
    }
   //  cout << start << endl;
    currNode = head;
    while(currNode->next != start) currNode = currNode->next;
    currNode->next = NULL;
    return head;
}