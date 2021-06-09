/* 编写一个打印 EOF 值的程序 */

#include <stdio.h>

main(){
    printf("EOF is %d\n", EOF); // EOF 定义在头文件 <stdio.h> 中，一般为 -1（其具体数值是什么并不重要，只要它与任何 char 类型的值都不相同即可）
}