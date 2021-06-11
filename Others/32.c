/*
   <字符串中字符排序>

   问题描述：输入一个字符串, 然后按照字符顺序从小到大进行排序, 并删除重复的字符
   输入格式：输入一个字符串
   输出格式：输出按照字符 (ASCII) 顺序从小到大排序字符串, 并删除重复的字符
   输入样例：badacgegfacb
   输出样例：abcdefg
*/

#include<stdio.h>
#include<stdlib.h>

void sort(char *s);
void put(char *s);

int main()
{
	char c[128];
	scanf("%s", c);
	sort(c);
	put(c);

	system("pause");
	return 0;
}

void sort(char *s)
{
	int i, j, index, temp;
	for (i = 0; s[i]!='\0'; i++) {
		index = i;
		for (j = i; s[j]!='\0'; j++) 
			if (s[index] > s[j])
				index = j;
		temp = s[index];
		s[index] = s[i];
		s[i] = temp;
	}
}

void put(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i-1] != s[i])
			printf("%c", s[i]);
}