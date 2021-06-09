/* 编写一个程序，打印输入中单词长度的直方图（水平方向） */

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

	for (int i = 1; i < MAXWORD; i++) {
		printf("%3d -> %3d:", i, wl[i]);
		if (wl[i] > 0) {
			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)  // 规约化
				len = 1;
		}
		else
			len = 0;
		// 绘制直方图
		while (len > 0) {
			putchar('*');
			len--;
		}
		putchar('\n');
	}

	if (overflow > 0)
		printf("There are %d words >= %d\n", overflow, MAXWORD);

    getchar();
    return 0;
}