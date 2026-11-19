void moveZeroes(int* nums, int numsSize) {
    int position = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] != 0) nums[position++] = nums[i];
    while (position < numsSize) nums[position++] = 0;
}
