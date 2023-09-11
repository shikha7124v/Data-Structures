#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};
Node* reverseLinkedList(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextNode = nullptr;

    while(curr != nullptr){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
void printList(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout<<curr->data<<"->";
        curr = curr->next;
    }
    cout<<"nullptr"<<endl;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout<<"Original Linked List: ";
    printList(head);
    head = reverseLinkedList(head);
    cout<<endl<<"Reversed Linked List: ";
    printList(head);
    return 0;
}