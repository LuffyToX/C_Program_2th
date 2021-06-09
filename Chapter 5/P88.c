/* strlen 函数：返回字符串 s 的长度 版本2 */

#include <stdio.h>

int strlen(char *s);

main(){
    printf("%d", strlen("array"));

    getchar();
    return 0;
}

int strlen(char *s)
{
    char *p = s;

    while(*p != '\0')
        p++;
    
    return p - s; // p 最终指向 '\0'，因此不需要 + 1
}