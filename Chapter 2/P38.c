/* strcat 函数：将字符串 t 连接到字符串 s 的尾部（s 必须有足够大的空间） */

#include <stdio.h>

void strcat(char s[], char t[]);

main(){
    char s[100] = "abcd";  // s 必须有足够大的空间
    char t[4] = "efg";

    strcat(s, t);
    printf("The result is: %s", s);

    getchar();
    return 0;
}

void strcat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while(s[i] != '\0')                // 判断是否为字符串的尾部 
        i++;
    
    while((s[i++] = t[j++]) != '\0');  // 将 t 拷贝到 s 的尾部
}