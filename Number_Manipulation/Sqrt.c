# Approach
Binary search method

# Complexity
- Time complexity:O(logn)
- Space complexity:O(1)

# Code
```c []
int mySqrt(int x) {
    long low = 0, high = x;
    while(low <= high)
    {
        long mid = (low + high)/2;
        if(mid*mid == x)
            return mid;
        else if(mid * mid < x)
          low = mid + 1;
        else
            high = mid-1;
    }
    return high;

}
```
