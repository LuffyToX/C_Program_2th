/* 将输入复制到输出 版本1 */

#include <stdio.h>

main(){
    int c;                // 存储键入值

    c = getchar();        // getchar 函数从文本流中读入下一个输入字符，并将其作为结果返回
    while(c != EOF){      // 在没有输入时（即退出输入，windows 下为 [Ctrl+z]），getchar 函数将返回一个特殊值，这个特殊值与任何实际字符都不同，这个值称为 EOF
        putchar(c);       // putchar 函数将打印一个字符
        c = getchar();
    }

    return 0;
}