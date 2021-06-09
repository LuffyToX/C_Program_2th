/* strlen 函数：返回字符串 s 的长度 版本1 */

#include <stdio.h>

int strlen(char *s);

main(){
    printf("%d", strlen("array"));

    getchar();
    return 0;
}

int strlen(char *s)
{
    int n;

    for(n = 0; *s != '\0'; s++)
        n++;
    
    return n;
}