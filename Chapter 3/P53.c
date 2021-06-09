/* trim 函数：删除字符串尾部的空格符、制表符与换行符 */

#include <stdio.h>
#include <string.h>

void trim(char s[]);

main(){
    char s[] = "abc     ";

    trim(s);
    printf("The result is: %s", s);

    getchar();
    return 0;
}

void trim(char s[])
{
    int n;

    for(n = strlen(s) - 1; n >= 0; n--){
        if(s[n] != ' ' && s[n] != '\t'  && s[n] != '\n')
            break;
    }
    s[n+1] = '\0';
}