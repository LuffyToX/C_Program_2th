/*
   <正整数的打印>

   问题描述：给出一个不多于 5 位的正整数: 1.求出它是几位数
                                       2.分别打印出每一位数字
                                       3.按照逆序打印出每一位数字
   输入格式：输入一个正整数
   输出格式：分三行输出结果
   输入样例：1234
   输出样例：4
            1234
			4321
*/

#include<stdio.h>
#include<stdlib.h>

int getlen(char s[]);
void reverse(char rs[],char s[]);

int num;

int main()
{
	char s[5], rs[5];
	scanf("%s", &s);
	num=getlen(s);
	reverse(rs, s);
	printf("%d\n%s\n%s\n", num, s, rs);

	system("pause");
	return 0;
}

int getlen(char s[])
{
	int i;
	for(i=0; i<5; i++){
		if(s[i]=='\0'){
			break;
		}
	}
	return i;
}

void reverse(char rs[], char s[])
{
	int i;
	for(i=0; i<num; i++){
		rs[i] = s[num-i-1];
	}
	rs[i] = '\0';
}
