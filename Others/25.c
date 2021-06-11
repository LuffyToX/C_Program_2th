/*
   <整数的 N 进制字符串表示>

   问题描述：将整数 n 转换成以 b 为基的字符串并存储到 s 中, 转换后的字符串从最高的非零位开始输出。如果n为负数, 则输出的字符串的第一个字符为 '-' (1 < b < 37, 自然数)
   输入格式：输入整数 n 和 b (n 可以为负数), n 和 b 以空格分隔
   输出格式：输出转化后的字符串 s
   输入样例：5 2
   输出样例：101
*/

#include<stdio.h>
#include<stdlib.h>
#define NEGATIVE 0
#define POSITIVE 1

int atob(int n, char *s, int b);

int main()
{
	int n, b;
	char s[32];
	scanf("%d %d", &n, &b);
	atob(n, s, b);
	printf("%s", s);

	system("pause");
	return 0;
}

int atob(int n, char *s, int b)
{
	int i = 0, j = 0, t = 0, state = POSITIVE;
	if (n < 0) {
		n = 0 - n;
		state = NEGATIVE;
	}
	do {
		s[i++] = n % b + '0';
		if (s[i-1] > '9') {
			s[i-1] += 'a' - '9' - 1;
		}
	} while ((n /= b) > 0);

	if (state == NEGATIVE) {
		s[i++] = '-';
	}
	s[i] = '\0';

	for (i -= 1; i > j; i--, j++) {
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
	return 0;
}