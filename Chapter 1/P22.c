/* 删除每个输入行末尾的空格及制表符，并删除完全是空格的行 */

#include <stdio.h>
#define MAXLINE 1000                               // maximum input line size

int getline(char line[], int maxline);
int remove(char s[]);

main() {
	char line[MAXLINE];                           // 当前输入行
	
	while (getline(line, MAXLINE) > 0)
		if (remove(line) > 0)
			printf("%s", line);
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
    
	return i;      // 字符串长度不包括末位的 '\0'
}

/* 删除字符串末尾的空格及制表符，并返回新字符串长度 */
int remove(char s[])
{
	int i = 0;

	// 找到换行符前面的元素的下标
	while (s[i] != '\n')
		i++;
	i--;

	// 一直回退到第一个不为空格或制表符的元素
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		i--;

	if (i >= 0) {
		i++;
		s[i] = '\n'; // 倒数第二位插入换行符
		i++;
		s[i] = '\0'; // 末位插入 '\0'，表示字符串结束
	}
	return i;
}