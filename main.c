#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

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

/* 136. Single Number */
int singleNumber(int *nums, int numsSize) {
    for (int i = 1; i < numsSize; i++) {
        nums[0] ^= nums[i];
    }
    return nums[0];
}

/* 104. Maximum Depth of Binary Tree */
int maxDepth(struct TreeNode *root) {

    if (!root) {
        return 0;
    }
    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);
    return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;

}

/* 226. Invert Binary Tree */
struct TreeNode *invertTree(struct TreeNode *root) {

    if (root == NULL) {
        return NULL;
    }

    struct TreeNode *left_1 = root->left;
    struct TreeNode *right_1 = root->right;

    root->left = right_1;
    root->right = left_1;

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

/* 283. Move Zeroes */
void moveZeroes(int *nums, int numsSize) {

    int pos = 0;
    int zeros = 0;

    int left = 0;
    int right = 0;

    int front = 0;
    int rare = 0;

    while (pos < numsSize) {
        while (nums[pos] == 0 && pos < numsSize) {
            pos++;
        }
        right = pos - 1;
        zeros = right - left + 1;
        front = pos;
        while (nums[pos] != 0 && pos < numsSize) {
            pos++;
        }
        rare = pos - 1;
        for (int i = 0; i < rare - front + 1; i++) {
            nums[left + i] = nums[left + i + zeros];
        }
        left = rare - zeros + 1;
    }

    for (int i = 0; i < zeros; i++) {
        nums[left + i] = 0;
    }

}

/* 448. Find All Numbers Disappeared in an Array */
int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize) {

    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = 0 - nums[index];
        } else {
            count++;
        }
    }

    int *result = (int *) malloc(sizeof(int) * count);
    *returnSize = count;
    count -= 1;
    for (int i = 0; i < numsSize && count >= 0; i++) {
        if (nums[i] > 0) {
            *(result + count) = i + 1;
            count -= 1;
        }
    }

    return result;

}

int main() {

    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(int);
    int returnSize = 0;

    int *result = findDisappearedNumbers(nums, numsSize, &returnSize);

    return 0;
}




