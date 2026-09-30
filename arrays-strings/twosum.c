#include <stdlib.h>

typedef struct HashNode {
    int key;
    int val;
    struct HashNode* next;
} HashNode;

#define HASH_SIZE 10007

int hash(int key) {
    int h = key % HASH_SIZE;
    return h < 0 ? h + HASH_SIZE : h;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashNode* hashTable[HASH_SIZE] = {NULL};
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int h = hash(complement);
        
        // Search for complement in the hash table
        HashNode* node = hashTable[h];
        while (node != NULL) {
            if (node->key == complement) {
                result[0] = node->val;
                result[1] = i;
                
                // Free allocated memory before returning
                for (int j = 0; j < HASH_SIZE; j++) {
                    HashNode* curr = hashTable[j];
                    while (curr != NULL) {
                        HashNode* tmp = curr;
                        curr = curr->next;
                        free(tmp);
                    }
                }
                return result;
            }
            node = node->next;
        }

        // Insert current element into hash table
        int curHash = hash(nums[i]);
        HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
        newNode->key = nums[i];
        newNode->val = i;
        newNode->next = hashTable[curHash];
        hashTable[curHash] = newNode;
    }

    // Free memory if no solution found
    for (int j = 0; j < HASH_SIZE; j++) {
        HashNode* curr = hashTable[j];
        while (curr != NULL) {
            HashNode* tmp = curr;
            curr = curr->next;
            free(tmp);
        }
    }

    *returnSize = 0;
    return NULL;
}