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

struct TreeNode *createTreeNode(int val) {
    struct TreeNode *newNode = (struct TreeNode *) malloc(sizeof(struct TreeNode));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->val = val;
    return newNode;
}
