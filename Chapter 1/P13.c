/* 统计输入中的行数 */

#include<stdio.h>

main(){
	int c;             // 存储键入符
	int nl = 0;        // 计数器

	while ((c=getchar()) != EOF)
		if (c == '\n') // 标准库保证输入文本流以行序列的形式出现，每一行均以换行符结束。因此，统计行数等价于统计换行符的个数
			nl++;
            
	printf("%d\n", nl);

    getchar();
    return 0;
}