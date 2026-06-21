# Complexity
- Time complexity: O(n)
- Space complexity: O(1)
# Code
```c []
int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int count = 0;
    int isChar = 0;
    for(int i = len-1;i >= 0;i--)
    {
        if(s[i] != ' ')
        {
            count++;
            isChar = 1;
        }

        if(isChar && s[i] == ' ')
            break;
    }
    return count;
}
```
