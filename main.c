#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

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

/* ---- Definition for a linked list node ---- */
struct ListNode {
    int val;
    struct ListNode *next;
};

/* Print the given list on console */
void printList(struct ListNode *head) {
    struct ListNode *temp = head;
    while (temp != NULL) {
        printf("%d, ", temp->val);
        temp = temp->next;
    }
}

/* Compare the given numbers */
int compare(const void *a, const void *b) {
    return a > b;
}

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

int main() {

    int nums_1[] = {1, 2, 3, 4, 5, 6, 7};
    int numsSize_1 = sizeof(nums_1) / sizeof(int);

    struct ListNode list_1[numsSize_1];

    for (int i = 0; i < numsSize_1; i++) {
        list_1[i].val = nums_1[i];
    }

    for (int i = 0; i < numsSize_1 - 1; i++) {
        list_1[i].next = &list_1[i + 1];
    }
    list_1[numsSize_1 - 1].next = NULL;

    int nums_2[] = {1, 2, 4, 6, 8, 10};
    int numsSize_2 = sizeof(nums_2) / sizeof(int);
    struct ListNode list_2[numsSize_2];

    for (int i = 0; i < numsSize_2; i++) {
        list_2[i].val = nums_2[i];
    }

    for (int i = 0; i < numsSize_2 - 1; i++) {
        list_2[i].next = &list_2[i + 1];
    }
    list_2[numsSize_2 - 1].next = NULL;

    printList(&list_1[0]);

    printf("\n");

    printList(&list_2[0]);

    struct ListNode *result = mergeTwoLists(list_1, list_2);

    printf("\n");

    printList(result);

    return 0;
}




