/*
Two Sum problem in C.
Given an array of integers, return indices of the two numbers 
such that they add up to a specific target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.
You can return the answer in any order.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result;

    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[j] == target - nums[i]){
                result = malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return malloc(sizeof(int) * 0);
}