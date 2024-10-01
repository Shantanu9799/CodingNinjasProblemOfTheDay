/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here   
    Node *lastNode = head;
    while(lastNode -> next) {
        lastNode = lastNode -> next;
    }
    Node *firstNode = head;
    while(lastNode->next != firstNode && firstNode != lastNode) {
        swap(firstNode -> data, lastNode -> data);
        firstNode = firstNode -> next;
        lastNode = lastNode -> prev;
    }
    return head;
}

