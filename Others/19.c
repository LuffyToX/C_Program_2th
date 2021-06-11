/*
   <整数合并>

   问题描述：将两个两位数的正整数 a、b 合并成一个整数并返回 (合并的方式是: 将 a 的十位和个位数依次放在结果的十位和千位上, b 的十位和个位数依次放在结果的个位和百位上
   输入格式：输入两个两位数的正整数, 以空格隔开
   输出格式：输出合并后的正整数
   输入样例：45 12
   输出样例：5241
*/

#include<stdio.h>
#include<stdlib.h>

int combine(int a, int b);

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n", combine(a, b));

	system("pause");
	return 0;
}

int combine(int m, int n)
{
	int s[2], t[2], i = 0, j = 0;
	char st[5];
	do{
		s[i++] = m % 10;
		t[j++] = n % 10;
	}while((m /= 10)*(n /= 10) > 0);

	st[0] = s[0] + '0';
	st[1] = t[0] + '0';
	st[2] = s[1] + '0';
	st[3] = t[1] + '0';
	st[4] = '\0';
	
	return atoi(st);
}
