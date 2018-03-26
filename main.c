#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree/BinaryTree.h"
#include "HashMap/HashMap.h"
#include "LinkedList/LinkedList.h"

#include "Util/Util.h"

/* 461. Hamming Distance */
int hammingDistance(int x, int y) {
    x = x ^ y;
    y = 0;
    for (int i = 0; i < 32; i++) {
        if (x & 1 == 1) {
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

/* 169. Majority Element */
int majorityElement(int *nums, int numsSize) {

    qsort(nums, (size_t) numsSize, sizeof(int), &compare);

    return nums[numsSize / 2];
}

/* 206. Reverse Linked List */
struct ListNode *reverseList(struct ListNode *head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *c = head;
    struct ListNode *p = NULL;
    struct ListNode *n = head->next;

    while (n != NULL) {
        c->next = p;
        p = c;
        c = n;
        n = c->next;
    }
    c->next = p;

    return c;
}

/* 21. Merge Two Sorted Lists */
struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2) {

    /* l1 and l2 are both non-null list */
    struct ListNode *head = (struct ListNode *) malloc(sizeof(struct ListNode));
    head->val = 0;
    head->next = NULL;
    struct ListNode *tail = head;

    struct ListNode *p1 = l1;
    struct ListNode *p2 = l2;

    while (p1 != NULL && p2 != NULL) {
        if (p1->val >= p2->val) {
            tail->next = p2;
            tail = tail->next;
            p2 = p2->next;
        } else {
            tail->next = p1;
            tail = tail->next;
            p1 = p1->next;
        }
    }

    if (p1 == NULL) {
        tail->next = p2;
    } else {
        tail->next = p1;
    }

    struct ListNode *result = head->next;
    free(head);
    return result;
}

/* 1. Two Sum */
int *twoSum(const int *nums, int numsSize, int target) {

    int result_size = 2;
    int *result = (int *) malloc(sizeof(int) * result_size);

    *(result + 0) = 0;
    *(result + 1) = 1;

    if (numsSize == 2) {
        return result;
    }

    HashTable *table = createNewTable();

    for (int i = 0; i < numsSize; i++) {
        if (containsKey(table, target - *(nums + i))) {
            *(result + 0) = i;
            *(result + 1) = get(table, target - *(nums + i));
            return result;
        }
        put(table, *(nums + i), i);
    }

    free_table(table);

    return result;

}

int main() {

    int nums[] = {448, 74, 41, 680, 719, 173, 774, 492, 636, 199, 362, 792, 74, 647, 587, 678, 261, 874, 467, 462, 735,
                  582, 999, 479, 34, 294, 702, 834, 239, 853, 349, 142, 690, 81, 324, 188, 813, 931, 502, 707, 967, 895,
                  445, 878, 426, 430, 93, 255, 304, 928, 960, 192, 452, 211, 495, 787, 328, 568, 313, 194, 608, 990,
                  944, 256, 204, 616, 44, 991, 461, 59, 854, 348, 611, 535, 459, 724, 213, 683, 777, 885, 460, 751, 450,
                  918, 806, 395, 454, 603, 57, 655, 110, 542, 24, 82, 777, 395, 877, 229, 550, 685, 142, 845, 139, 804,
                  353, 111, 599, 114, 679, 728, 82, 137, 274, 490, 340, 244, 880, 982, 281, 852, 568, 428, 474, 348,
                  487, 432, 749, 586, 983, 402, 386, 210, 300, 864, 29, 980, 715, 911, 738, 375, 688, 515, 374, 945,
                  513, 392, 999, 214, 658, 920, 695, 391, 880, 600, 916, 235, 384, 763, 943, 399, 958, 826, 663, 844,
                  733, 461, 226, 616, 536, 246, 155, 83, 732, 940, 392, 176, 806, 925, 377, 824, 465, 175, 342, 291,
                  113, 186, 410, 490, 170, 32, 701, 162, 471, 742, 297, 791, 541, 243, 885, 603, 292, 933, 948, 326,
                  894, 686, 316, 341, 119, 610, 276, 463, 883, 849, 854, 682, 304, 737, 99, 760, 411, 426, 445, 682,
                  794, 541, 147, 520, 576, 644, 727, 499, 369, 222, 226, 836, 354, 53, 996, 868, 37, 42, 293, 271, 452,
                  181, 219, 125, 943, 149, 591, 599, 972, 961, 351, 545, 928, 922, 376, 917, 621, 777, 844, 655, 151,
                  881, 125, 877, 258, 291, 566, 76, 58, 18, 692, 815, 448, 224, 286, 191, 110, 655};
    int numsSize = sizeof(nums) / sizeof(int);

    int *result = twoSum(nums, numsSize, 74);

    printf("%d, %d\n", *(result + 0), *(result + 1));

    int key = nums[189] + nums[241];

    return 0;
}




