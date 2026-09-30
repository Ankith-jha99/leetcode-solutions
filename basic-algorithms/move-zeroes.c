void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;

    // Traverse the array and move all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[lastNonZeroFoundAt];
            nums[lastNonZeroFoundAt] = nums[i];
            nums[i] = temp;
            lastNonZeroFoundAt++;
        }
    }
}