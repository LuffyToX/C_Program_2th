/*
   <数字排序>

   问题描述：将输入的三个数按从小到大的顺序输出
   输入格式：输入三个数字, 每个数字用空格分开
   输出格式：按照从小到大的顺序将三个数字输出, 每个数字用空格分开 (要求程序可以处理整数和浮点数两种输入情况)
   输入样例：2.4 5.6 1.5
   输出样例：1.5 2.4 5.6
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a, b, c, t;
	scanf("%f %f %f", &a, &b, &c);

	if(a>b){
		t = a;
		a = b;
		b = t;
	}
	if(a>c){
		t = a;
		a = c;
		c = t;
	}
	if(b>c){
		t = b;
		b = c;
		c = t;
	}
	
	printf("%g %g %g\n", a, b, c);

	system("pause");
	return 0;
}

