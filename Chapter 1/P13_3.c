/* 编写一个将输入复制到输出的程序并将其中连续的多个空格用一个空格代替 版本1 */

#include <stdio.h>

main(){
	int c;                       // 记录当前输入字符的 ASCII 码值
	int last_c = 'a';            // 记录前一个字符的 ASCII 码值

	while ((c=getchar()) != EOF) {
		if (c != ' ')           // 处理当前字符为非空格的字符
			putchar(c);
		else if (last_c != ' ') // 处理当前字符为空格的字符（如果前一个字符也是空格，那么该字符将不输出）
			putchar(c);
		last_c = c;             // 更新 last_c
	}
}