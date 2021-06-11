/*
   <数值变换>

   问题描述：从键盘输入一个三位正整数, 然后反向输出对应的数, 如果输入的数不是三位正整数, 则输出 －1
   输入格式：从键盘输入一个三位的正整数
   输出格式：输出变换后的正整数
   输入样例：356
   输出样例：653
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, rnum;
	int s[3];
	int i = 0;
	scanf("%d", &num);
	if (num <= 999 && num >= 100) {
		do {
			s[i++] = num % 10;
		} while ((num /= 10) > 0);
		rnum = s[2] + s[1] * 10 + s[0] * 100;
		printf("%d\n", rnum);
	} 
	else
		printf("-1\n");

	system("pause");
	return 0;
}
