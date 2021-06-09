/* 编写一个计算 x^y 的函数（标准库中有 pow(x,y)） */

#include <stdio.h>

int power(int x, int y); // 函数原型中的参数名是可选的（即这里也可以写为：int power(int, int)）

main(){
    printf("2^2 = %d\n(-3)^2 = %d", power(2,2), power(-3,2));

    getchar();
    return 0;
}

int power(int base, int n)
{
    int p = 1; // 累乘器

    for(int i = 1; i <= n; i++)
        p *= base;
    return p;
}