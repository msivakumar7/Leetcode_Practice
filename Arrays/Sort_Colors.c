# Complexity
- Time complexity:
<!-- O(n) -->

- Space complexity:
<!-- O(1) -->

# Code
```c []
void sortColors(int* nums, int numsSize) {
    int zero = 0,one = 0;
    for(int i = 0;i < numsSize;i++)
    {
        if(nums[i] == 0)
            zero++;
        else if(nums[i] == 1)
            one++;
    }
    for(int i = 0;i < zero;i++)
        nums[i] = 0;
    for(int i = zero;i < (zero+one);i++)
        nums[i] = 1;
    for(int i = (zero+one);i < numsSize;i++)
        nums[i] = 2;
}
```
