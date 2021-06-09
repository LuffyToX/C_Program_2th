/* 统计输入的字符数 版本2 */

#include<stdio.h>

main(){
	double nc;

	for(nc = 0; getchar() != EOF; nc++); // C语言要求 for 循环必须有一个循环体，因此用单独的分号代替（空语句）
    printf("%.0f\n", nc); // 对于 float 和 double 型都用 %f 进行说明

    getchar();
    return 0;
}