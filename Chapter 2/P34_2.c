/* upper 函数：把字符 c 转换为大写形式（只对 ASCII 字符计有效） */

#include <stdio.h>

char upper(char);

main(){
    char c[] = "abcdefghijklmnopqrstuvwxyz";

    printf("The result is:\n");
    for(int i = 0; i < 26; i++)
        printf("%c ", upper(c[i]));
    
    getchar();
    return 0;
}

char upper(char c)
{
    if(c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;   
}