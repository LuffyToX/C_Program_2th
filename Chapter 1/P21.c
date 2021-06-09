/* 打印最长的输入行 */

#include <stdio.h>
#define MAXLINE 1000                           /* 允许的输入行的最大长度 */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main() {
	int len;                                   /* 当前行长度 */
	int max;                                   /* 目前为止发现的最长行的长度 */
	char line[MAXLINE];                        /* 当前的输入行 */
	char longest[MAXLINE];                     /* 用于保存最长的行 */

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) // 说明还有未处理的行
		if (len > max) {
			max = len;
			copy(longest, line);               // 保存该行
		}

	if (max > 0)                               // 说明存在这样的行
		printf("%s", longest);

	return 0;

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

	return i;
}

/* 将 from 复制到 to */
void copy(char to[], char from[])
{
	int i = 0;

	while ((to[i] = from[i]) != '\0')
		i++;
}