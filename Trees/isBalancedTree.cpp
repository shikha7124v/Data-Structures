// Balanced Tree - The difference between the height of left subtree and right subtree is not more than 1;
class Solution{
    int dfsHeight(TreeNode<int>* root){
        if(root == NULL){
            return;
        }
        int leftHeight = dfsHeight(root->left);
        if(leftHeight == -1){
            return -1;
        }
        int rightHeight = dfsHeight(root->right);
        if(rightHeight == -1){
            return -1;
        }
        if(abs(leftHeight-rightHeight) > 1){
            return -1;
        }
        return max(leftHeight, rightHeight)+1;
    }
    bool isBalanced(TreeNode<int>* root){
        return dfsHeight(root) != -1;
    }
}