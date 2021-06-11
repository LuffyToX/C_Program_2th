/*
   <判断可逆素数>

   问题描述：编写一个判断某数是否可逆素数的函数, 在主函数中输入一个整数, 再调用此函数进行判断 (可逆素数：若将某一素数的各位数字的顺序颠倒后得到的数仍是素数, 则此素数称为可逆素数)
   输入格式：输入一个整数
   输出格式：输出 yes/no (yes: 可逆素数; no: 不是可逆素数)
   输入样例：23
   输出样例：no
*/

#include<stdio.h>
#include<stdlib.h>

int test(char s[]);
int getlen(char s[]);
void reverse(char rs[],char s[]);

int weishu; 

int main()
{
	char num[16] , revnum[16];
	scanf("%s", &num);
	weishu = getlen(num);
	reverse(revnum, num);
	if(test(num)==1 && test(revnum)==1)
		printf("yes\n");
	else
		printf("no\n");

    system("pause");
	return 0;
}

int test(char s[])
{
	int shu, i, isShushu = 1;
	shu = atoi( s );
	for(i=2; i<shu; i++){
		if(shu%i == 0){
			isShushu = 0;
			return 0;
			break;
		}
	}
	if(isShushu==1)
	return 1;
}

void reverse(char rs[], char s[])
{
	int i;
	for(i=0; i<weishu; i++){
		rs[i] = s[weishu-i-1];
	}
	rs[i] = '\0';
}

int getlen(char s[])
{
	int i;
	for(i=0; ; i++)
		if(s[i]=='\0')
			break;
	return i;
}