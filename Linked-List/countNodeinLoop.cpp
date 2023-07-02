// Check whether the given linked list contains a loop or not and if loop is present then return the count of nodes in a loop or else return 0.
// C - Position of the node to which the last node is connected. If 0 means no loop
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

int countNodesinLoop(struct Node *head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            int count = 1;
            slow = slow->next;
            while(slow != fast){
                count++;
                slow = slow->next;
            }
            return count;
        }
    }
    return 0;
}
