#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* ---- Definition for a binary tree node ---- */
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createNewNode(int val) {
    struct TreeNode *newNode = (struct TreeNode *) malloc(sizeof(struct TreeNode));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->val = val;
    return newNode;
}

/* 461. Hamming Distance */
int hammingDistance(int x, int y) {
    x = x ^ y;
    y = 0;
    for (int i = 0; i < 32; i++) {
        if (x & 1 == true) {
            y++;
        }
        x = x >> 1;
    }
    return y;
}

/* 617. Merge Two Binary Trees */
struct TreeNode *mergeTrees(struct TreeNode *t1, struct TreeNode *t2) {

    if (t1 == NULL && t2 == NULL) {
        return NULL;
    }

    struct TreeNode *newRoot = (struct TreeNode *) malloc(sizeof(struct TreeNode));
    newRoot->left = NULL;
    newRoot->right = NULL;

    struct TreeNode *left_1 = NULL, *left_2 = NULL;
    struct TreeNode *right_1 = NULL, *right_2 = NULL;

    if (t1 != NULL && t2 != NULL) {
        newRoot->val = t1->val + t2->val;
        left_1 = t1->left;
        left_2 = t2->left;
        right_1 = t1->right;
        right_2 = t2->right;
    } else if (t1 == NULL && t2 != NULL) {
        newRoot->val = t2->val;
        left_1 = t2->left;
        right_1 = t2->right;
    } else if (t1 != NULL && t2 == NULL) {
        newRoot->val = t1->val;
        left_2 = t1->left;
        right_2 = t1->right;
    }

    newRoot->left = mergeTrees(left_1, left_2);
    newRoot->right = mergeTrees(right_1, right_2);

    return newRoot;
}

int singleNumber(int *nums, int numsSize) {
    for (int i = 1; i < numsSize; i++) {
        nums[0] ^= nums[i];
    }
    return nums[0];
}

int main() {

    int testCase[] = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(testCase) / sizeof(int);

    printf("%d\n", singleNumber(testCase, size));

    return 0;
}




