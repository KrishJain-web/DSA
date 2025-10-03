class TreeNode{
    int n;
    TreeNode *child[MAX_CHILDREN]; //min b/2 max b
    int key[MAX_size];
    bool leaf;
};

TreeNode*search(TreeNode* x , int k){
    int i = 0;
    while(i<x->n && x->key[i] < k){
        i++;
    }
    if(k == x->key[i]){
        return x;
    }
    if(leaf) return nullptr;
    return search(x->child[i] , k);
}
