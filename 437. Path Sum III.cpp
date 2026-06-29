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
    int pathSum(TreeNode *node, long long current_sum, int targetSum, unordered_map<long long, int>& prefix_sum) {
        if (node == nullptr) {
            return 0;
        }

        current_sum += node->val;

        int result = 0;

        if (prefix_sum.count(current_sum - targetSum)) {
            result += prefix_sum[current_sum - targetSum];
        }

        prefix_sum[current_sum]++;

        result += pathSum(node->left, current_sum, targetSum, prefix_sum);
        result += pathSum(node->right, current_sum, targetSum, prefix_sum);

        prefix_sum[current_sum]--;

        return result;
    }

    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> prefix_sum;
        prefix_sum[0] = 1;

        return pathSum(root, 0, targetSum, prefix_sum);
    }
};
