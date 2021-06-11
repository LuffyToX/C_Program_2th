/*
   <求差集>

   问题描述：输入两个集合 A、B, 每个集合中的元素都是自然数, 求 A-B
   输入格式：输入分两行, 分别为 A、B 集合的元素, 元素间以空格分隔并以 -1 结束                                            
   输出格式：输出 A-B 的结果, 以空格分隔。输出元素的顺序与集合 A 输入的顺序一致 (如果 A、B 的差集为空集, 则不输出任何数值)
   输入样例：2 8 3 4 -1
            6 1 4 9 -1
   输出样例：2 8 3
*/

#include<stdio.h>
#include<stdlib.h>
#define KNOTFOUND 0
#define KFOUND 1

int getIt(int s[], int t[]);
int dealIt(int s[], int t[], int r[]);
int printIt(int s[]);

int main()
{
	int s[32] = {0}, t[32] = {0};
	int result[32] = {0};
	getIt(s, t);
	dealIt(s, t, result);
	printIt(result);

	system("pause");
	return 0;
}

int getIt(int s[], int t[])
{
	int i, j;
	for (i=0; ; i++) {
		scanf("%d", &s[i]);
		if (s[i] == -1) {
			break;
		}
	}
	for (j=0; ; j++) {
		scanf("%d", &t[j]);
		if (t[j] == -1) {
			break;
		}
	}
	return 0;
}

int dealIt(int s[], int t[], int r[])
{
	int i, k = 0;
	for (i=0; s[i]!=-1; i++) {
		int j = 0;
		int state = KNOTFOUND;

		for (; t[j]!=-1; j++) {
			
			if (s[i] == t[j]) {
				state = KFOUND;
			}
		}

		if (state == KNOTFOUND) {
			r[k++] = s[i];
		}
	}
	r[k] = -1;
	return 0;
}

int printIt(int s[])
{
	int i;
	for (i = 0; s[i] != -1; i++) {
		printf("%d ", s[i]);
	}
	return 0;
}