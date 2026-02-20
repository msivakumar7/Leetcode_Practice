# Complexity
- Time complexity:O(n)
- Space complexity:O(1)

# Code
```c []
int removeElement(int* nums, int numsSize, int val) {
    int duplicate = 0;
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] != val)
        {
            nums[duplicate] = nums[i];
            duplicate++;
        }
    }
    return duplicate;
}
```
