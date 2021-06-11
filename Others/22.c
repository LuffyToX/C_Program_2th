/*
   <魔方阵>

   问题描述：输入一个自然数 N (1 ≤ N ≤ 9), 要求输出如下的魔方阵 (边长为 2*N-1, N 在中心出现一次, 其余位置上的数字从外向中心逐渐增大)：
            N=3 时：
                   11111
                   12221
                   12321
                   12221
                   11111
            N=4 时：
                   1111111
                   1222221
                   1233321
                   1234321
                   1233321
                   1222221
                   1111111
   输入格式：输入一个正整数 N
   输出格式：输出符合要求的方阵, 每个数字占一个字符宽度, 在每一行末均输出一个回车符
   输入样例：3
   输出样例：11111
            12221
            12321
            12221
            11111
*/

#include<stdio.h>
#include<stdlib.h>

void pside(int n);
void pbody(int n, int i);
void pmid(int n);

int main()
{
	int n,i;
	scanf("%d", &n);
	pside(n);
	for(i=n-2; i>0; i--)
		pbody(n, i);
	pmid(n);
	for(i=1; i<=n-2; i++)
		pbody(n, i);
	pside(n);

	system("pause");
	return 0;
}

void pside(int n)
{
	int i;
	for(i=0; i<2*n-1; i++)
		printf("1");
	printf("\n");
}

void pbody(int n, int i)
{
	int j;
	for(j=1; j<=n-1; j++)
		printf("%d", j<=n-i ? j : n-i);
	for(j=n; j>0; j--)
		printf("%d", j<=n-i ? j : n-i);
	printf("\n");
}

void pmid(int n)
{
	int i;
	for(i=1; i<=n; i++)
		printf("%d", i);
	for(i-=2; i>0; i--)
		printf("%d", i);
	printf("\n");
}