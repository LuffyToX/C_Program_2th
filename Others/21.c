/*
   <最大公因子>

   问题描述：用递归的方法求最大公因子
   输入格式：输入两个正整数, 用空格分隔
   输出格式：输出上述两个数字的最大公因子
   输入样例：36 24
   输出样例：12
*/

#include<stdio.h>
#include<stdlib.h>

int gcd(int m, int n);

int main()
{
	int m, n;	
	scanf("%d %d", &m, &n);
	printf("%d\n", gcd(m,n));

	system("pause");
	return 0;
}

int gcd(int m, int n)
{
	if (m <= n && n % m == 0)
		return m;
	if (m > n)
		return gcd(n, m);
	return gcd(n, n % m);
}