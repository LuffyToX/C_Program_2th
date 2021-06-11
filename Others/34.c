/*
   <计算日期差>

   问题描述：
            struct Date {
               int year;
               int month;
               int day;
            };
            利用该结构计算两个日期之间相差的天数
   输入格式：输入共两行, 表示两个日期, 每一行包含日期的年、月、日三个整数, 以空格分隔 (假设第二个日期 ≥ 第一个日期)
   输出格式：第二个日期与第一个日期间相差的天数
   输入样例：2003 3 25 
            2003 3 29
   输出样例：4
*/

#include<stdio.h>
#include<stdlib.h>

struct Date {
   int year;
   int month;
   int day;
} D1, D2;

int daytab[2][13] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};

long int caculate(struct Date D1, struct Date D2);
int datetonum(int a, int b, int c);

int main()
{
	long int n = 0;

	scanf("%d %d %d", &D1.year, &D1.month, &D1.day);
	scanf("%d %d %d", &D2.year, &D2.month, &D2.day);
	n = caculate(D1, D2);
	printf("%ld\n", n);

	system("pause");
	return 0;
}

long int caculate(struct Date D1, struct Date D2)
{
	long int totalNumber = 0, i = 0;
	int dayOfD1Year = 0, dayOfD2Year = 0;
	
	for (i = 0; i <= D2.year - D1.year - 1; i++)
		totalNumber += datetonum(D1.year + i, 12, 31);
	
	dayOfD1Year = datetonum(D1.year, D1.month, D1.day);
	dayOfD2Year = datetonum(D2.year, D2.month, D2.day);
	totalNumber -= dayOfD1Year;
	totalNumber += dayOfD2Year;
	return totalNumber;
}

int datetonum(int nian, int yue, int ri)
{
	int isLeap = 0, num, i;
	if(nian%4==0 && nian%100!=0 || nian%400==0){
		isLeap=1;
	}
	for(i=1; i<yue; i++){
		ri += daytab[isLeap][i];
	}
	num = ri;
	return num;
}