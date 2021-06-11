/*
   <扩展字符>

   问题描述：将字符串 s1 中的缩记符号在字符串 s2 中扩展为等价的完整字符并输出 s2 (例如将 a-d 扩展为 abcd) 
   输入格式：输入包含扩展符的字符串
   输出格式：输出扩展后的字符串
   输入样例：a-c-u-B
   输出样例：abcdefghijklmnopqrstu-B
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void expand(char *s1, char *s2);

int main()
{
	char s1[1024], s2[1024];
	int i = 0, c;
	while ((c = getchar()) != EOF) {
		s1[i++] = c;
	}
	expand(s1, s2);
	printf("%s\n", s2);

	system("pause");
	return 0;
}

void expand(char *s1, char *s2)
{
	int i = 0, j = 0, k;

	while (1) {
		if (s1[i] == '-') {
			s2[j++] = '-';
			i++;
		}
		else break;
		}
	
	while (s1[i] != '\0') {

		if (s1[i] == ' ') {
			s2[j++] = ' ';
			i++;
			while (1) {
				if (s1[i] == '-') {
					s2[j++] = '-';
					i++;
				}
				else break;
			}
			continue;
		}

		if (s1[i] == '-' && s1[i+1] > s1[i-1])
		{
			if (s1[i-2] == '-' && s1[i-3] != '-' &&s1[i-3] != ' ' && i>=3)
			{
				j -= 1;
				k = 0;
				while (s2[j-1] != s1[i+1]) {
					s2[j] = s1[i-1] + k;
					j++;
					k++;
				}
			} 

			else
			{
				k = 0;
				while (s2[j-1] != s1[i+1]) {
					s2[j] = s1[i-1] + k;
					j++;
					k++;
				}
			}
		}

		else if (s1[i] == '-' && s1[i+1] < s1[i-1] && s1[i-2] != '-')
		{
			s2[j++] = s1[i-1];
			s2[j++] = s1[i];
			s2[j++] = s1[i+1];
		}

		else if (s1[i] == '-' && s1[i+1] < s1[i-1] && s1[i-2] == '-')
		{
			s2[j++] = s1[i];
			s2[j++] = s1[i+1];
		}
		
		else if (s1[i] != '-' && s1[i+1] != '-' && s1[i-1] != '-')
		{
			s2[j++] = s1[i];
			s2[j] = s1[i+1];
		}
		i++;
	}
	s2[j] = '\0';
}