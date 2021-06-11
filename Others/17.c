/*
   <回文数>

   问题描述：输出 a、b 之间 (包括 a、b) 的所有回文数 (回文数：一个整数, 当它的各位数字逆序排列，形成的整数与原整数相同，这样的数称为回文数)
   输入格式：输入两个整数 a、b (a<b), 以空格分隔
   输出格式：输出有若干行, 每行一个回文数 (从小至大依次按序输出)
   输入样例：88 120
   输出样例：88
            99
            101
            111
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int loop(int x);

int main()
{
	int  i, upper, lower;
	scanf("%d %d", &lower, &upper);
	for(i=lower; i<=upper; i++)
		if( loop(i)==1)
			printf("%d\n", i);

	system("pause");
	return 0;
}

int loop(int x)
{
	int i = 0, t = x;
	char s[16];

	do {
		s[i++] = x % 10 + '0';
	} while ((x/=10) > 0);
	s[i] = '\0';
	
	x = atoi( s );
	return x == t;
}