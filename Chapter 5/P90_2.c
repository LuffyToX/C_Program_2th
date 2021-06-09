/* strcpy 函数：将指针 t 指向的字符串复制到指针 s 指向的位置 版本2 */

#include <stdio.h>

void strcpy(char *s, char *t);

main(){
    char s[] = "abcdef";
    char t[] = "def";

    strcpy(s, t);
    printf("%s", s);

    getchar();
    return 0;
}

void strcpy(char *s, char *t)
{
    int i;

    i = 0;
    while(*s++ = *t++);
}