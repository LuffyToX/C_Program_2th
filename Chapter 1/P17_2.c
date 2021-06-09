/* 编写一个程序，打印输入中单词长度的直方图（垂直方向） */

#include <stdio.h>

#define MAXHIST 15                    // max length of histogram
#define MAXWORD 11                    // max length of a word
#define IN 1
#define OUT 0

main() {
	int nc = 0;                      /* number of chars in a word */
	int overflow = 0;                /* number of overflow words */
	int state = OUT;
	int c;                           /* 存储键入值 */
	int maxvalue;                    /* max value for wl[] */
	int len;                         /* length of each bar */
	int wl[MAXWORD];                 /* word length counters */
	
	for (int i = 0; i < MAXWORD; i++)
		wl[i] = 0; // 初始化计数器

	while ((c = getchar()) != EOF) {
		// the end of a word
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			// 有一个单词
			if (nc > 0) {
				if (nc < MAXWORD)
					wl[nc]++;
				else
					overflow++;
			}
			nc = 0;
		}
		// beginning of a new word
		else if (state == OUT) {
			state = IN;
			nc = 1;            
		}
		// inside a word
		else
			nc++;              
	}

	maxvalue = 0;
	for (int i = 1; i < MAXWORD; i++)
		if (wl[i] > maxvalue)
			maxvalue = wl[i];

	for (int i = MAXHIST; i > 0; i--) {
		// 从直方图的最顶层开始，判断需不需要打印 *
		for (int j = 1; j < MAXWORD; j++) {
			if ((wl[j] * MAXHIST / maxvalue) >= i)
				printf(" * ");
			else
				printf("   ");
		}
		putchar('\n');  // 换下一行
	}

	// 输出数组 wl 的下标及取值
	for (int i = 1; i < MAXWORD; i++)
		printf("%2d ", i);
	putchar('\n');
	for (int i = 1; i < MAXWORD; i++)
		printf("%2d ", wl[i]);
	putchar('\n');

	if (overflow > 0)
		printf("There are %d words >= %d\n", overflow, MAXWORD);

    getchar();
    return 0;
}