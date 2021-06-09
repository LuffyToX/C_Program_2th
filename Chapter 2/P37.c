/* 编写函数 htoi，把由十六进制数字组成的字符串（包含可选的前缀）转换为与之等价的（十进制）整型值 */

#include <stdio.h>

#define YES 1
#define NO 0

int htoi(char s[]);

main(){
    char s[] = "0xF";

    if(htoi(s) != 0)
        printf("The result is: %d", htoi(s));
    else 
        printf("The input is not valid!");
    
    getchar();
    return 0;
}

int htoi(char s[])
{
    int hexdigit;          // 十六进制数

    int i = 0;
    if(s[i] == '0'){      // 跳过可选的 0x/0X 并判断是否为合法的十六进制数（如果有 0 则其后一定是 x/X）
        i++;
        if(s[i] == 'x' || s[i]  == 'X')
            i++;
        else
            return 0;
    }

    int n = 0;            // 存储转换后的十进制数
    int inhex = YES;      // 是否是合法的十六进制数字符
    for(; inhex == YES; i++){
        if(s[i] >= '0' && s[i] <= '9')
            hexdigit = s[i] - '0';
        else if(s[i] >= 'a' && s[i] <= 'f')
            hexdigit = s[i] - 'a' + 10;
        else if(s[i] >= 'A' && s[i] <= 'F')
            hexdigit = s[i] - 'A' + 10;
        else
            inhex = NO;    // 不合法的十六进制字符（即字符串已经全部读取完毕）

        if(inhex == YES)
            n = 16 * n + hexdigit;
    }
    return n;
}