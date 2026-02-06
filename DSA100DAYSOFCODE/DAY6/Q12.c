//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements
void moveZeroes(int* nums, int numsSize) {
    int j = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[j++] = nums[i];
        }
    }

    // Fill remaining positions with zero
    while (j < numsSize) {
        nums[j++] = 0;
    }
}
