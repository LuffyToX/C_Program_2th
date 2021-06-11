/*
   <整数各位数字求和>

   问题描述：求整数 x 的各位数字之和
   输入格式：输入一个正整数
   输出格式：输出该整数各位数字之和
   输入样例：58
   输出样例：13
*/

#include<stdio.h>
#include<stdlib.h>

int sum(int x);

int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", sum(num));

	system("pause");
	return 0;
}

int sum(int x)
{
	int i = 0, s[8], sum = 0;

	do{
		s[i++] = x % 10;
	} while((x /= 10) > 0);

	for(; i>0; i--)
		sum += s[i-1];
	return sum; 
}