//minDepth 
int mindDepth(root){
  if(!root) return 0;
  if(!root->left) return 1 + minDepth(root->right);
  if(root->right) return 1 + minDepth(root->left);
return 1+min(minDepth(root->right),minDepth(root->left));
}

//max depth
int maxDepth(root){
if(!root) return 0;
return 1+max(maxDepth(root->left) , maxDepth(root->right));


//count nodes
int count(root){
if(!root) return 0;
return  1 + count(root->left) + count(root->right);
}

//sum
class Solution {
public:
    int subtreeSum(TreeNode* root) {
        if (!root) return 0;
        return root->val + subtreeSum(root->left) + subtreeSum(root->right);
    }

    int totalSum(TreeNode* root) {
        if (!root) return 0;
        int lsum = subtreeSum(root->left);  // sum of left subtree
        int rsum = subtreeSum(root->right); // sum of right subtree

        int sum = root->val + lsum + rsum;
        cout << "Left Sum = " << lsum << ", Right Sum = " << rsum << ", Total = " << sum << endl;

        return sum;
    }
};



