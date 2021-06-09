/* 统计输入的行数、单词数与字符数 */

#include <stdio.h>

#define IN 1
#define OUT 0

main(){
	int c;                                       // 存储键入值
	int state = OUT;                             // 记录程序当前是否正位于一个单词中（初始状态为 OUT）
	int nl = 0, nw = 0, nc = 0;                  // nl-行数，nw-单词数，nc-字符数

	while ((c = getchar()) != EOF) {
		nc++;                                    // 字符数
		if (c == '\n')                           
			nl++;                                // 行数
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) { // 只有遇到每个单词的首字符才会计数（该单词其后的字符不会计数）
			state = IN;
			nw++;                                // 单词数
		}
	}
	printf("Rows: %d\nWords: %d\nCharacters: %d", nl, nw, nc); // 注意换行符（不可见）也属于字符

    getchar();
    return 0;
}