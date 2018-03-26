#ifndef BINARY_TREE_C
#define BINARY_TREE_C

#include <stdio.h>
#include <stdlib.h>

#endif

#include "BinaryTree.h"

struct TreeNode *createTreeNode(int val) {
    struct TreeNode *newNode = (struct TreeNode *) malloc(sizeof(struct TreeNode));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->val = val;
    return newNode;
}
