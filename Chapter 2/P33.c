/* atoi 函数：将数字字符串 s 转换为相应的整型数 */

#include <stdio.h>

#define S1 "15"
#define S2 "26"

int atoi(char s[]);

main(){
    printf("The result is: %d", atoi(S1) + atoi(S2));

    getchar();
    return 0;
}

int atoi(char s[])
{
    int n = 0;

    for(int i = 0; s[i] >= '0' && s[i] <= '9'; i++)  // 关系运算符的优先级高于逻辑运算符
        n = 10 * n + (s[i] - '0'); // 10 * n 表示每次读取新的字符都要把前几位整体进位
    
    return n;
}