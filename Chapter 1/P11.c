/* 将输入复制到输出 版本2 */

#include <stdio.h>

main(){
    int c;

    while((c=getchar()) != EOF) // != 的优先级高于 =，因此必须加 ()
        putchar(c);

    return 0;
}