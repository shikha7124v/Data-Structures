#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution{
    public:
    Node *createBST(vector<int> &arr, int l, int r){
        if(l > r) return nullptr;
        int mid = (l+r)/2;
        Node *root = new Node(arr[mid]);
        root->left = createBST(arr, 1, mid -1);
        root->right = createBST(arr, mid+1, r);

        return root;
    }
    void inorder(Node *root, vector<int> &arr){
        if(!root)
    }
}
Node *insert(struct Node *node, int key){
    if(node == NULL) return new Node(key);
    if(key < node->data){
        node->left = insert(node->left, key);
    }
    else if(key > node->data){
        node->right = insert(node->right, key);
    }
    return node;
}
void preOrder(Node *node){
    if(node == NULL) return;
    printf("%d", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
int height(struct Node* node){
    if(node == NULL) return 0;
    int lDepth = height(node->left);
    int rDepth = height(node->right);
    if(lDepth > rDepth){
        return(lDepth+1);
    }
    else{
        return(rDepth+1);
    }
}
Node *buildTree(string str)
{
    if(str.length() == 0 || str[0] == 'N'){
        return NULL;
    }
    vector<string> ip;

    isstringstream iss(str);
    for(string str; iss >> str;){
        ip.push_back(str);
    }
    Node *root = new Node(stoi(ip[0]));

    queue<Node *>queue;
    queue.push(root);

    int i=1;
    while(!queue.empty() && i<ip.size()){
        Node *currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

        if(currVal != 'N'){
            currNode->left = new Node(stoi(currVal));

            queue.push(currNode->left);
        }
        i++;
        if(i >= ip.size()){
            break;
        }
        currVal = ip[i];

        if(currVal != "N"){
            currNode->right =  new Node(stoi(currVal));

            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}
Node *buildBalancedTree(Node *root);
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        struct Node *root = NULL;
        int n, temp;
        string tree;
        getline(cin, tree);
        root = buildTree(tree);

        Solution obj;
        root = obj.buildBalancedTree(root);
        cout<<height(root)<<rndl;
    }
    return 0;
}