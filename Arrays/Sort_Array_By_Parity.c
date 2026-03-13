# Complexity
- Time complexity:
<!-- O(n) -->

- Space complexity:
<!-- O(n) -->

# Code
```c []
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int *result = calloc(numsSize,sizeof(int));
    *returnSize = numsSize;
    int index = 0;
    for(int i = 0;i < numsSize;i++)                                
    {
        if(nums[i] % 2 == 0)
            result[index++] = nums[i];
    }
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] % 2 != 0)
            result[index++] = nums[i];
    }
    return result;
}
```
