/*
   <求和>

   问题描述：求 s = 1 + (1+2) + (1+2+3) +...+ (1+2+3+...+n)
   输入格式：输入一个正整数 n
   输出格式：输出 s
   输入样例：5
   输出样例：35
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, j, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			sum += j;
		}
	}
	printf("%d\n", sum);

	system("pause");
	return 0;
}
