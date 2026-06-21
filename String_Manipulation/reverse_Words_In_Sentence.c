# Approach
Two pointer technique(It handle with index based)

# Complexity
- Time complexity: O(n)

- Space complexity: O(n)

# Code
```c []
char* reverseWords(char* s) {

    int size = strlen(s);
    char* res = malloc(size + 1);
    int left = 0;     //It points words 1st letter
    int right = 0;   //It is used to find out word's last letter
    int space = 0;  //Used for full traversal and space checking
    int i = 0;
    while(s[space] != '\0')
    {
        while(s[space] != ' ' && s[space] != '\0')
            space++;
        
        right = space - 1;

        while(right >= left)
            res[i++] = s[right--];
        
        if(s[space] != '\0')
        {
            res[i++] = ' ';
             space++;
            left = space;
           
        }
        
    }
    res[i] = '\0';
    return res;
}
```
