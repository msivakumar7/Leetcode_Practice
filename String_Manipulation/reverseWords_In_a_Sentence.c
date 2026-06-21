# Approach
By using string tokenization 

# Complexity
- Time complexity: O(n^2)

- Space complexity: O(n)

# Code
```c []
char* reverseWords(char* s) {
    char*words[10000];
    int count = 0;
    int size = strlen(s);
    char*token = strtok(s," ");
    while(token != NULL)
    {
        words[count++] = token;
        token = strtok(NULL," ");
    }  
    char*res = malloc(size + 1);
    res[0] = '\0';
    for(int i = count - 1;i >= 0;i--)
    {
        strcat(res, words[i]);
        if(i != 0)
            strcat(res," ");
    }
    
    return res;
}
```
