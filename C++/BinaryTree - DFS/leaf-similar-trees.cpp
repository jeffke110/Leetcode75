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
     void findLeaf(TreeNode* root, unsigned long int& track) {
         if (!root->right && !root->left) {
             track *= 10;
             track += root->val;
         }
         if (root->right) {
             findLeaf(root->right, track);
         }
         if (root->left) {
             findLeaf(root->left, track);
         }
     }
     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
         unsigned long  rootTrack = 0;
         findLeaf(root1, rootTrack);

         unsigned long  rootTrack2 = 0;
         findLeaf(root2, rootTrack2);

         if (rootTrack == rootTrack2) {
             return true;
         }
         return false;
     }
 };