/* 统计各个数字、空白符及其它字符出现的次数 版本1 */

#include<stdio.h>

main() {
	int c;                          // 存储键入值
	int nwhite = 0, nother = 0;     // nwhite-空白符计数器，nother-其它字符计数器
	int ndigit[10] = { 0 };         // 数字计数器

	while ((c=getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			ndigit[c-'0']++; // getchar 读取的是字符（ASCII码）
		else if (c == ' ' || c == '\n' || c == '\t')
			nwhite++;
		else
			nother++;
	}

	printf("Digits\n");
	for (int i = 0; i < 10; i++)
		printf("%2d: %2d\n", i+1, ndigit[i]);

	printf("\nWhite spaces: %d\nOther characters: %d", nwhite, nother);

    getchar();
    return 0;
}