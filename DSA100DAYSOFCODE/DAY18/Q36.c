//Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
//The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. 
//You must write an algorithm that runs in O(n) time and without using the division operation

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    
    int* answer = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    // Step 1: Left products
    answer[0] = 1;
    for(int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Step 2: Right products
    int right = 1;
    for(int i = numsSize - 1; i >= 0; i--) {
        answer[i] = answer[i] * right;
        right *= nums[i];
    }

    return answer;
}
