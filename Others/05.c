/*
   <计算空格换行个数>

   问题描述：分别计算所输入的字符串中空格, 换行符的个数
   输入格式：输入可以是键盘上的任意字符
   输出格式：分别输出空格、换行符的个数 (输出的结果一行显示, 数字之间以空格格开)
   输入样例：bb  ss  pp=
            fz
   输出样例：2 1
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int numberOfSpace = 0, numberOfNewline = 0;
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			numberOfSpace++;
		}
		if (c == '\n') {
			numberOfNewline++;
		}
	}
  
    // 由于 windows 下空行 Ctrl+z 才能 EOF, 因此会多算一个换行符, 因此这里 -1
	printf("%d %d", numberOfSpace, numberOfNewline-1);

	system("pause");
	return 0;
}
