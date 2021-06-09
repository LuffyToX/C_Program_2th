/* 统计各个数字、空白符及其它字符出现的次数 版本2 */

#include<stdio.h>

main() {
	int c;
	int nwhite = 0, nother = 0, ndigit[10] = { 0 };

	while ((c=getchar()) != EOF) {
		switch (c) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			ndigit[c-'0']++; break;
		case ' ':
		case '\t':
		case '\n':
			nwhite++;
		default: 
			nother++; break;
		}
	}

	printf("Digits\n");
	for (int i = 0; i < 10; i++)
		printf("%2d: %2d\n", i+1, ndigit[i]);

	printf("\nWhite spaces: %d\nOther characters: %d", nwhite, nother);

    getchar();
    return 0;
}