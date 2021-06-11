/*
   <转换整数>

   问题描述：输入一个小数 (正值浮点数) , 将该小数转化为最近的整数输出 (四舍五入)
   输入格式：输入一个小数
   输出格式：显示输出结果
   输入样例：3.47
   输出样例：3
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float num;
	int rnum;
	scanf("%f", &num);
	rnum = num + 0.5;
	printf("%d\n", rnum);

	system("pause");
	return 0;
}
