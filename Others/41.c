/* 问题描述：输入一个真分数的分子分母, 输出约分后的分子分母
   输入格式：输入两个整数, 用空格分隔
   输出格式：输出两个整数, 用空格分隔
   输入样例：6 9
   输出样例：2 3 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int i;
	int min=m<n ? m : n;
	for(i=2; i<=min; i++)
		if(m%i==0 && n%i==0){
			m /= i;
			n /= i;
			min /= i;

		}
	printf("%d %d", m, n);

	system("pause");
	return 0;
}