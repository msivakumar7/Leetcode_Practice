# Complexity
- Time complexity:O(n^2)
- Space complexity:O(1)

# Code
```c []
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
 
    *returnSize = 2;
   static int result[2];


      for(int i = 0;i <numsSize;i++) 
      { for(int j = i+1;j < numsSize;j++)
       {
         if((nums[i] + nums[j]) == target)
          { 
           result[0] = i;
           result[1] = j;
           return result;

          }
} 
      }
      return NULL;
}
```
