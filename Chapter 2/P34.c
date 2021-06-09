/* lower 函数：把字符 c 转换为小写形式（只对 ASCII 字符计有效） */

#include <stdio.h>

char lower(char);

main(){
    char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    printf("The result is:\n");
    for(int i = 0; i < 26; i++)
        printf("%c ", lower(c[i]));
    
    getchar();
    return 0;
}

char lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}