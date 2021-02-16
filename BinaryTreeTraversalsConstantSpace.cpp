vector < int > inorderMorrisTraversal(TreeNode * root) {
        vector < int > res;
         if (!root) return res;
        TreeNode *cur, * pre;
        cur = root;
         while (cur) {
             if (!cur-> left) {
                res.push_back(cur -> val);
                cur = cur-> right;
            } else {
                pre = cur-> left;
                 while (pre->right && pre->right != cur) pre = pre-> right;
                 if (!pre-> right) {
                    pre ->right = cur;
                    cur = cur-> left;
                } else {
                    pre ->right = NULL;
                    res.push_back(cur -> val);
                    cur = cur-> right;
                }
            }
        }
        return res;
    }
    
    vector < int > preorderMorrisTraversal(TreeNode * root) {
        vector < int > res;
         if (!root) return res;
        TreeNode *cur, * pre;
        cur = root;
         while (cur) {
             if (!cur-> left) {
                res.push_back(cur -> val);
                cur = cur-> right;
            } else {
                pre = cur-> left;
                 while (pre->right && pre->right != cur) pre = pre-> right;
                 if (!pre-> right) {
                    pre ->right = cur;
                    res.push_back(cur -> val); // only difference with inorder
                    cur = cur-> left;
                } else {
                    pre ->right = NULL;
                    cur = cur-> right;
                }
            }
        }
        return res;
    }
