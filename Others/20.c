/*
   <圆分割>

   问题描述：用直线对圆进行一次分割, 可以把圆分成两块; 第二次分割, 最多可以分成 4 块; 第三次最多可以分成 7 块; ... 给定正整数 N (1 ≤ N ≤ 65535), 求经过 N 次分割后, 最多能把圆分成多少块
   输入格式：输入一个正整数 N, 表示分割次数
   输出格式：输出一个数字, 表示经过 N 次分割后最多分成的块数, 在行末要输出一个换行符
   输入样例：3
   输出样例：7
*/

#include<stdio.h>
#include<stdlib.h>

int cut(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", cut(n));

	system("pause");
	return 0;
}

int cut(int n)
{
	if(n == 1)
		return 2;
	else	
		return cut(n-1) + n;
}

