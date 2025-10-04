vector<int>result;
void inorder_traversal(TreeNode *root ){
  if(!root) return;
  if(root->left) inorder(root->left);
result.push(root);
  if(root->right) inorder(root->right);
}
  
  
