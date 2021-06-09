/* strcmp 函数：根据 s 按照字典顺序小于、等于或大于 t 的结果分别返回负整数、0、正整数 版本1 */

#include <stdio.h>

int strcmp(char *s, char *t);

main(){
    char s[] = "abcd";
    char t[] = "abce";

    printf("%d", strcmp(s, t));

    getchar();
    return 0;
}

int strcmp(char *s, char *t)
{
    int i;

    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;

    return s[i] - t[i];
}