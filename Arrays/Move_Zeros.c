# Complexity
- Time complexity:O(n)
- Space complexity:O(1)

# Code
```c []
void moveZeroes(int* nums, int numsSize) {
    int count = 0;
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] == 0)
            count++;
    }
    int k =0;
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] != 0)
            nums[k++] = nums[i];
    }
    for(int i = 0;i < count;i++)
        nums[k++] = 0;
}
```
