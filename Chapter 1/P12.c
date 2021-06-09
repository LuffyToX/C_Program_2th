/* 统计输入的字符数 版本1 */

#include<stdio.h>

main(){
	long nc = 0;

    // 在 windows 下，如果缓冲中还有其它内容，[Ctrl+z] 不表示输入结束，仅代表当前行输入结束，只在单独一个[Ctrl+z] 的时候才表示输入结束
    
    // 如果有输入字符的话，会多读一个换行符（因为只有在单独一行使用 [Ctrl+z] 才能退出）
    // 如果没有输入字符（即只输入 [Ctrl+z]），则结果为 0
	while (getchar() != EOF)
		nc++;

	printf("%ld\n", nc);       // %ld long 型

    getchar();
    return 0;
}