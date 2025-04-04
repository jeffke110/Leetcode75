
#define NOMINMAX
#include <windows.h>
#include <iostream>
#include <algorithm>

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 

class Solution {
public:
    int maxDepthTracker(TreeNode* root, int& depth) {
        depth++;
        int maxDepthLeft = depth;
        int maxDepthRight = depth;
        if (root->right != nullptr) {
            maxDepthRight = maxDepthTracker(root->right, maxDepthRight);
        }
        if (root->left != nullptr) {
            maxDepthLeft = maxDepthTracker(root->left, maxDepthLeft);
        }
        return std::max(maxDepthRight, maxDepthLeft);

    }
    int maxDepth(TreeNode* root) {

        if (!root) {
            return 0;
        }
        int maxDepthLeft = 1;
        int maxDepthRight = 1;
        if (root->right != nullptr) {
            maxDepthRight = maxDepthTracker(root->right, maxDepthRight);
        }
        if (root->left != nullptr) {
            maxDepthLeft = maxDepthTracker(root->left, maxDepthLeft);
        }
        return std::max(maxDepthRight, maxDepthLeft);
    }
 };



 // Helper function to print the tree in-order
 void printTree(TreeNode* root) {
     if (root == nullptr) return;
     printTree(root->left);
     std::cout << root->val << " ";
     printTree(root->right);
 }

 int main() {
     // Construct a sample binary tree:
     //        1
     //       / \
     //      2   3
     //     / \
     //    4   5

     TreeNode* root = new TreeNode(1,
         new TreeNode(2,
             new TreeNode(4),
             new TreeNode(5)
         ),
         new TreeNode(3)
     );

     std::cout << "In-order traversal of tree: ";
     printTree(root);
     std::cout << std::endl;

     Solution sol;
     int depth = sol.maxDepth(root);
     std::cout << "Max depth (stub): " << depth << std::endl;
     return 0;
 }