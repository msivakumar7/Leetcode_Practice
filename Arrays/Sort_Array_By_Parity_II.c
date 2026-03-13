# Complexity
- Time complexity:
<!-- O(n)-->

- Space complexity:
<!-- O(n) -->

# Code
```c []
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) {
    int *result = calloc(numsSize,sizeof(int));
    *returnSize = numsSize;
    int i = 0;
    for(int j = 0;j < numsSize;j++)
    {
        if(nums[j] %2 == 0)
        {
            result[i] = nums[j];
            i += 2;
        }
    }
    i = 1;
    for(int j = 0;j < numsSize;j++)
    {
        if(nums[j] %2 != 0)
        {
            result[i] = nums[j];
            i += 2;
        }
    }
    return result;

}
```
