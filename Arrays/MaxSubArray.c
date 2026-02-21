# Approach 
Kadane's Algorithm
 
# Complexity
- Time complexity: O(n)
- Space complexity:O(1)

# Code
```c []
int maxSubArray(int* nums, int numsSize) {
    long curr = nums[0];
    long maxSub = nums[0];
    for(int i = 1;i < numsSize;i++)
    {
        if(curr < 0)
        curr = nums[i];
        else
        curr += nums[i];
        if(curr > maxSub)
            maxSub = curr;
    }
    return maxSub;
}
```
