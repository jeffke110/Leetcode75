
#define NOMINMAX
#include <windows.h>
#include <iostream>
#include <algorithm>
#include <vector>

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
     void interateTree(TreeNode* root, int maxVal, int& count) {
         if (root->val >= maxVal) {
             maxVal = root->val;
             count++;
         }
         if (root->right) {
             interateTree(root->right, maxVal, count);
         }
         if (root->left) {
             interateTree(root->left, maxVal, count);
         }
     }
     int goodNodes(TreeNode* root) {
         int count = 0;
         interateTree(root, root->val, count);
         return count;
     }
 };