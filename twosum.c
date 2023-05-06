/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//NOT WORKING YET!!
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    for (int i = 0; i < numsSize; ++i){
        for (int j = i + 1; j < numsSize; ++j){
            if (nums[i] + nums[j] == target){
                int values[2] = {i, j};
                return values;
            }
        }
    }
    return 0;
}
