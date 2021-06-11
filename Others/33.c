/*
   <最长升序子串>

   问题描述：输入一行字符串, 该字符串只由小写英文字母 a-z 组成, 且其中的字符可以重复, 最长不超过 10000 个字符。
            从该字符串中按顺序挑选出若干字符 (不一定相邻) 组成一个新串, 称为 '子串', 如果子串中每两个相邻的字符或者相等或者后一个比前一个大, 则称为 "升序子串"。
			求出输入字符串的最长升序子串的长度
   输入格式：输入一行字符串, 该串不含空格, 以回车符结束
   输出格式：输出一个正整数, 表示字符串中最长的升序子串的长度, 在行末要输出一个回车符
   输入样例：abdbch
   输出样例：5
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int deal(char a[]);

int main()
{
	char a[10001];
	int n;
	scanf("%s", a);
	n = deal(a);
	printf("%d\n", n);

	system("pause");
	return 0;
}

int deal(char a[])
{
	int n;
	int i, j;
	int f[10001] = {0};

	n = strlen(a);
	for (i=0; i<n; i++)
		f[i] = 1;

	for (i=0; i<n; i++)
		for (j=0; j<i; j++)
			if (a[i]>=a[j] && f[i]<=f[j])
				f[i] = f[j] + 1;

	for (i = 0, j = 0; i < n; i++)
		if (f[j] <= f[i])
			j = i;

	return f[j];
}