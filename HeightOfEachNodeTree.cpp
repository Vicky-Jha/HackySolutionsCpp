unordered_map<TreeNode*, int> umap;
int findHeightOfEachNode(TreeNode * root) {
          if (!root) return  0 ;
          int left = findHeightOfEachNode(root-> left);
          int right = findHeightOfEachNode(root-> right);
        umap[root] = 1 + max(left, right);
          return  1 + max(left, right);
    }
