/*
   <打印正六边形>

   问题描述：输入一个正整数 N, 在屏幕上用 '*' 打印以 N 为边长的正六边形
   输入格式：输入一个正整数 N
   输出格式：输出以 N 为边长的正六边形
   输入样例：4
   输出样例：    ****
               *    *
              *      *
             *        *
              *      *
               *    *
                **** 
*/

#include<stdio.h>
#include<stdlib.h>

void ps(int n);             // print space
void px(int n);             // print '*'
void pside(int n);          // print the first and last line
void pmid(int n);           // print the middle line
void pbody(int n, int m);   // print the body line

int main()
{
	int i, n;
	scanf("%d", &n);
	pside(n);

	for(i=1; i<n-1; i++)
		pbody(n, i);

	pmid(n);
	
	for(i=n-2; i>0; i--)
		pbody(n, i);

	pside(n);

	system("pause");
	return 0;
}

void ps(int n)
{
	int i;
	for(i=0; i<n; i++)
		printf(" ");
}

void px(int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("*");
}

void pside(int n)
{
	ps(n-1);
	px(n);
	ps(n-1);
	printf("\n");
}

void pmid(int n)
{
	px(1);
	ps(3*n-4);
	px(1);
	printf("\n");
}

void pbody(int n,int m)
{
	ps(n-m-1);
	px(1);
	ps(n+2*m-2);
	px(1);
	ps(n-m-1);
	printf("\n");
}