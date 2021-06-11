/*
   <简易计算器>

   问题描述：读入两个整数运算数 (data1、data2) 及一个运算符 (op), 计算表达式 data1 op data2 的值 (op 可以是 +, -, *, /)
   输入格式：输入共一行, 包括两个整数以及一个运算符, 三者以空格分隔
   输出格式：输出运算结果
   输入样例：23 5 *
   输出样例：115
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	char op;
	int result = 0;
	scanf("%d %d %c", &a, &b, &op);
	switch (op) {
		case '+':
			{
			result = a + b;
			break;
			}
		case '-':
			{
			result = a - b;
			break;
			}
		case '*':
			{
			result = a * b;
			break;
			}
		case '/':
			{
			result = a / b;
			break;
			}
		default:
			break;
	}
	printf("%d\n", result);

	system("pause");
	return 0;
}
