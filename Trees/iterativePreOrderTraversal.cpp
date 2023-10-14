#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left, *right;
};

vector<int> preOrderTraversal(node * curr){
    vector<int> preOrder;
    if(curr == NULL){
        return preOrder;
    }
    stack<node*> s;
    s.push(curr);

    while(!s.empty()){
        node * topNode = s.top();
        preOrder.push_back(topNode -> data);
        s.pop();
        if(topNode->right != NULL){
            s.push(topNode->right);
        }
        if(topNode->left != NULL){
            s.push(topNode->left);
        }
    }
    return preOrder;
}
struct node* newNode(int data){
    struct node * node = (struct node *) malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main()
{
    struct node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->left->left = newNode(6);
    root->left->left->right = newNode(7);

    vector<int> preOrder;
    preOrder = preOrderTraversal(root);

    cout<<"The preOrder Traversal is : ";
    for(int i=0; i<preOrder.size(); i++){
        cout<<preOrder[i]<<" ";
    }
    return 0;
}