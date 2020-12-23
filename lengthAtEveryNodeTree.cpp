class Solution {
 public :
     int longestUnivaluePath(TreeNode* root) {
         int res = 0 ;
        helper(root, res);
        return res;
    }
    int helper(TreeNode* node, int & res) {
         if (!node) return  0 ;
         int left = helper(node-> left, res);
         int right = helper(node-> right, res);
        left = (node->left && node->val == node->left->val)? left + 1 : 0 ;
        right = (node->right && node->val == node->right->val)? right + 1 : 0 ;
        res = max(res, left + right);
         cout<<left<<" "<<right<<endl; // length of left and right at every node
         return max(left, right);
    }
};
