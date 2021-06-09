/* 编写一个统计空格、制表符和换行符个数的程序 */

#include <stdio.h>

main(){
	int c;                       // 存储键入符
	int nb = 0, nt = 0, nl = 0;  // nb-空格，nt-制表符，nl-换行符

	while ((c=getchar()) != EOF) {
		if (c == ' ')
			nb++;
		if (c == '\t')
			nt++;
		if (c == '\n')
			nl++;
	}

	printf("Backspaces: %d\nTab chararcters: %d\nNewline characters: %d", nb, nt, nl);

    getchar();
    return 0;
}