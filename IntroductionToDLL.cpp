/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    // Write your code here
    Node* headNode = new Node(arr[0]);
    Node* curr = headNode;
    for(int i = 1; i < arr.size(); ++i) {
        Node* newNode = new Node(arr[i], nullptr, curr);
        curr -> next = newNode;
        curr = curr -> next;
    }
    return headNode;
}
