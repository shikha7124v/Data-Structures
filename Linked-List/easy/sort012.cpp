// Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. 
// The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to 
// head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
struct Node* start = NULL;

class Solution{
    public:
    Node *segregate(Node *head){
        int zeros=0, ones=0, twos=0;
        Node*curr = head;
        while(curr->next != NULL){
            if(curr->data == 0)zeros++;
            else if(curr->data == 1)ones++;
            else twos++;
            curr = curr->next;
        }
        Node *nhead = new Node(0);
        curr=nhead;
        for(int i=0; i<zeros; i++){
            Node* nnode = new Node(0);
            curr->next=nnode;
            curr=curr->next;
        }
        for(int i=0; i<ones; i++){
            Node* nnode = new Node(1);
            curr->next=nnode;
            curr=curr->next;
        }
        for(int i=0; i<twos; i++){
            Node* nnode = new Node(2);
            curr->next=nnode;
            curr=curr->next;
        }
        nhead=nhead->next;
        return nhead;
    }
};
void printList(struct Node* Node){
    while(Node!=NULL){
        cout<<Node->data;
        Node = Node->next;
    }
    cout<<endl;
}
void insert(int n1){
    int n, value, i;
    struct Node* temp;
    for(int i=0; i<n; i++){
        cin>>value;
        if(i == 0){
        start = new Node(value);
        temp = start;
        continue;
        }
        else{
        temp->next = new Node(value);
        temp = temp->next;
        temp->next = NULL;
        }
    } 
}
int main()
{
    int n, t;
    cin>>t;
    while(t--){
        cin>>n;
        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);    
    }
    return 0;
}