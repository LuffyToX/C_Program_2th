/*
   <判断出栈序列>

   问题描述：对于一个栈, 已知元素的进栈序列, 判断一个由栈中所有元素组成的排列是否是可能的出栈序列
   输入格式：输入共两行, 第一行：一个整数 N (3 ≤ N ≤ 10), 代表有 N 个元素, 进栈序列是 1 2 3 ... N
                       第二行：一个序列 (N 个元素), 各元素由空格分隔
   输出格式：打印判断结果 ('YES'/'NO')
   输入样例：3
            3 1 2
   输出样例：NO
*/

#include<stdio.h>
#include<stdlib.h>
#define MAXVAL 100

void push(int f);
int pop(void);

int sp = 0;
int val[MAXVAL];

int main()
{
	int n, i, temp, j = 0, isOutStack;
	int s[16], t[16] = {0};
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &s[i]);
	temp = n;
	for (i=n-1; i>=0; i--) {
		push(s[i]);
		while (val[sp-1]==temp && sp>0) {
			t[j++] = pop();
			temp--;
		}
	}
	isOutStack = 1;
	for (n-=1, j=0; n>=0; n--, j++) {
		if (t[j] != n+1) {
			isOutStack = 0;
			break;
		}
	}
	if (isOutStack)
		printf("YES\n");
	else
		printf("NO\n");

	system("pause");
	return 0;
}

void push(int f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("stack full\n");
}

int pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("stack empty\n");
		return 0;
	}
}