
#include <unordered_map>
#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left, * right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> prefixSumCount;
        prefixSumCount[0] = 1; // Important base case for when the path itself equals targetSum
        return dfs(root, 0, targetSum, prefixSumCount);
    }

private:
    int dfs(TreeNode* node, long long currSum, int target, unordered_map<long long, int>& prefixSumCount) {
        if (!node) return 0;

        currSum += node->val;
        int count = prefixSumCount[currSum - target]; // Check how many times (currSum - target) occurred

        prefixSumCount[currSum]++; // Add current prefix sum
        count += dfs(node->left, currSum, target, prefixSumCount);
        count += dfs(node->right, currSum, target, prefixSumCount);
        prefixSumCount[currSum]--; // Backtrack

        return count;
    }
};
