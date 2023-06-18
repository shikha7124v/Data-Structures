#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL; 
    }
};
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
}

//preorder traversal

void preorder(Node)
{
    if(Node == NULL)
    {
        return;
    }
    printf(Node->data);
    preorder(Node->left);
    preorder(Node->right);
}

//inorder traversal

void inorder(root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    print(root->data);
    inorder(root->right);
}

//postorder traversal

void postorder(root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    print(root->data);
}

//levelorder traversal

vector<vector<int>> levelorder(TreeNode* root)
{
    vector<vector<int>> ans;
    if(root == NULL)
    {
        return ans;
    }
    queue <TreeNode*> q;
    q.push(root);
    while(!q.empty)
    {
        int size = q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}