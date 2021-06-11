/*
   <求水仙花数>

   问题描述：输入一个正整数 N (100 ≤ N ≤ 999), 求出 100 ~ N 之间的所有水仙花数 (水仙花数：如果一个三位数的个位数、十位数、百位数的立方和等于该数自身, 就称这个数为水仙花数)
   输入格式：输入一个正整数 N
   输出格式：输出从100到N之间的所有水仙花数, 每个数占一行
   输入样例：400
   输出样例：153
            370
            371
*/

#include<stdio.h>
#include<stdlib.h>
#define threetimes(n) ((n)*(n)*(n))

int test(int num);

int main()
{
	int i, j, max, shui[1024];
	scanf("%d", &max);
	for(i=153, j=0; i<=max; i++)
	{
		if(test(i)==1)
		{
		shui[j] = i;
		j++;
		}
	}
	for(i=0; i<j; i++)
	{
		printf("%d\n", shui[i]);
	}

	system("pause");
	return 0;
}

int test(int i)
{
	int ge, shi, bai, lifanghe;
	ge = i % 10;
	shi = (i%100-ge) / 10;
	bai = (i-shi*10-ge) / 100;
	lifanghe = threetimes(ge) + threetimes(shi) + threetimes(bai);
	if (lifanghe == i)
		return 1;
	else
		return 0;
}
