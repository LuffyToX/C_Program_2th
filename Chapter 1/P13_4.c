/* 编写一个将输入复制到输出的程序并将其中连续的多个空格用一个空格代替 版本2 */

#include <stdio.h>

main(){
	int c;             
	int last_c = 'a';

	while ((c=getchar()) != EOF) {
		if (c != ' ' || last_c != ' ')  // 只要当前字符或上一字符不是空格，就可以输出当前字符（其否命题是当前字符和上以字符都是空格，即不输出）
			putchar(c);
		last_c = c;
	}

	getchar();
	return 0;
}