/*
   <日期天数转换>

   问题描述：输入日期, 计算该日期是这一年的第几天
   输入格式：输入一个日期 (年 月 日, 中间以空格分隔)
   输出格式：输出一个整数
   输入样例：2006 2 21
   输出样例：52
*/

#include<stdio.h>
#include<stdlib.h>

int datetonum(int a,int b,int c);
int daytab[2][13]={
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};

int main()
{
	int nian, yue, ri, num;
	
	scanf("%d %d %d", &nian, &yue, &ri);
	num=datetonum(nian, yue, ri);
	printf("%d\n", num);

	system("pause");
	return 0;
}


int datetonum(int nian, int yue, int ri)
{
	int isLeap = 0, num, i;
	if(nian%4==0 && nian%100!=0 || nian%400==0){
		isLeap = 1;
	}
	for(i=1;i<yue;i++){
		ri += daytab[isLeap][i];
	}
	num = ri;
	return num;
}

