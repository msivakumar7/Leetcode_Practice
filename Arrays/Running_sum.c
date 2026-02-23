# Complexity
- Time complexity:O(n)
- Space complexity:O(1)

# Code
```c []
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int sum = 0;
    int*res = malloc(numsSize*sizeof(int));
    for(int i = 0;i < numsSize;i++)
    {
        sum += nums[i];
        res[i] = sum;
    }
    return res;
}
```
