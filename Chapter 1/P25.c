/* 编写程序将输入中的制表符替换成适当数目的空格，使空格充满到下一个制表符终
   止位。假设制表符终止位是固定的（每隔 TABNIC 列就会出现一个制表符终止位） */

#include <stdio.h>
#define TABINC 8                           // 每 8 位出现一个制表符终止位

main() {
	int c;                                 // 存储键入值
	int nb = 0;                            // number of blanks necessary
	int pos = 1;                           // position of character in line

	while ((c = getchar()) != EOF) {
		if (c == '\t') { 
			// 计算出要到达下一个制表符终止位需要的空格数
			nb = TABINC - (pos - 1) % TABINC;

			while (nb > 0) {
				putchar(' ');
				pos++;
				nb--;
			}
		}
		else if (c == '\n') {
			putchar(c);  // 换行
			pos = 1;     // 重置当前位
		}
		else {
			putchar(c);
			pos++;
		}
	}
}