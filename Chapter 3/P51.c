/* reverse 函数：倒置字符串 s 中的各个字符的位置 */

#include <stdio.h>
#include <string.h>

void reverse(char s[]);

main(){
    char s[] = "abcdef";

    reverse(s);
    printf("The result is: %s", s);

    getchar();
    return 0;
}

void reverse(char s[])
{
    int c, i, j;

    for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}