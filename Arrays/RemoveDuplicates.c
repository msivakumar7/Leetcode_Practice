# Complexity
- Time complexity:O(n)

- Space complexity:O(1)

# Code
```c []
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize <=0)
        return 0;
    int duplicate = 1;
    for(int i = 1;i < numsSize;i++)
    {
        if(nums[i] != nums[duplicate-1])
        {
            nums[duplicate] = nums[i];
            duplicate ++;
        }
    }
    return duplicate;
}
```
