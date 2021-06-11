/*
   <整数组合>

   问题描述：假设 unsigned short 类型占 16 位 (x、y、z 都是 unsigned short 类型)。从键盘输入 x、y 的值 (十进制形式), 然后将 x 的高 8 位作为 z 的高 8 位, y 的高 8 位作为 z 的低 8 位, 最后输出 z 的值 (十进制形式)
   输入格式：以十进制形式输入 x、y 的值 (以空格隔开)
   输出格式：以十进制形式输出 z 的值
   输入样例：840 2177
   输出样例：776
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned short int x, y, z;
	scanf("%hu %hu", &x, &y);
	y = y >> 8;
	x = x >> 8;
	x = x << 8;
	z = x + y;
	printf("%hu\n", z);

	system("pause");
	return 0;
}

