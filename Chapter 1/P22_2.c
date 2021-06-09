/* 编写函数 reverse(s) 将字符串 s 中的字符顺序颠倒过来 */

#include<stdio.h>
#define MAXLINE 1000                               // maximum input line size

int getline(char line[], int maxline);
void reverse(char s[]);

main() {
	char line[MAXLINE];                            // current input line

	while (getline(line, MAXLINE) > 0) {
		reverse(line);
		printf("%s", line);
	}
}

/* 将一行读入到 s 中并返回其长度 */
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		// 读到 '\n' 就说明要换行了，应该立刻跳出循环
		s[i] = c;
	if (c == '\n') {
		s[i] = c;  // 将此 '\n' 插入倒数第二位
		i++;
	}
	s[i] = '\0';   // 将 '\0' 插入末位，作为字符串结束标志

	return i;      // 字符串长度不包括末位的 '\0'
}

/* 将字符串 s 中的字符顺序颠倒过来 */
void reverse(char s[])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')        // find the end of string s
		i++;
	i--;                        // back off from '\0'
	if (s[i] == '\n')
		i--;

	j = 0;                      // beginning of new string s
	while (j < i) {
		temp = s[j];
		s[j] = s[i];            // swap the characters
		s[i] = temp;
		i--;
		j++;
	}
}