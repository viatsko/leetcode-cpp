/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void leafs(TreeNode *node, vector<int>& result) {
        if (node == nullptr) return;

        if (node->left == nullptr && node->right == nullptr) {
            result.push_back(node->val);
            return;
        }

        leafs(node->left, result);
        leafs(node->right, result);
    }

    const vector<int> leafs(TreeNode *node) {
        vector<int> result;
        leafs(node, result);
        return result;
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        auto& leafs1 = leafs(root1);
        auto& leafs2 = leafs(root2);

        auto p = mismatch(leafs1.begin(), leafs1.end(), leafs2.begin());

        if (p.first == leafs1.end() && p.second == leafs2.end()) {
            return true;
        } else {
            return false;
        }
    }
};
