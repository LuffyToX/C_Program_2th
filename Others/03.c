/*
   <前驱、后继字符>

   问题描述：从键盘输入一个字符, 求出它的前驱和后继字符 (按照 ASCII 码值排序), 并按照从小到大的顺序输出这三个字符和对应的 ASCII 值
   输入格式：从键盘输入一个字符
   输出格式：按两行输出：第一行按照从小到大的顺序输出这三个字符，并以一个空格隔开;
                       第二行按照从小到大的顺序输出三个字符对应的ASCII值，并以一个空格隔开
   输入样例：b
   输出样例：a b c
            97 98 99
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c;
	scanf("%c", &c);
	printf("%c %c %c\n", c-1, c, c+1);
	printf("%d %d %d\n", c-1, c, c+1);

	system("pause");
	return 0;
}
