/* squeeze 函数：从字符串 s 中删除字符 c */

#include <stdio.h>

void squeeze(char s[], char c);

main(){
    char s[] = "abcdefg";
    char c = 'c';          // 要删除的字符

    squeeze(s, c);         // 传递数组时，传递的是数组的首地址
    printf("The result is: %s", s);

    getchar();
    return 0;
}

void squeeze(char s[], char c)
{
    int i, j;

    for(i = j = 0; s[i] != '\0'; i++){
        if(s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0'; // 字符串结束标志
}