bool lefttoright =  true;
vector<vector<int>> zigzagtraversal(TreeNode*root){
vector<vector<int>>result;
  vector<int>level;
  stack<TreeNode*>current;
  stack<TreeNode*>next;
  if(!root) return{};
current.push(root);
while(!current.empty()){
   TreeNode* temp = current.top();
current.pop();
level.push(temp->data);
if(lefttoright){
if(root->left) next.push(temp->left);
if(root->right) next.push(temp->right);
}
if(!lefttoright){
if(root->right) next.push(temp->right);
if(root->left)next.push(temp->left);
}

if(current.empty()){
result.push(level);
level.clear();
swap(current , next);
}
return result;
}

  
