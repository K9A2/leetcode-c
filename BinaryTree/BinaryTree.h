#ifndef BINARY_TREE_C
#define BINARY_TREE_C

#include <stdio.h>
#include <stdlib.h>

#endif

/* ---- Definition for a binary tree node ---- */
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createTreeNode(int val);
