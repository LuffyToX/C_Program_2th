/*
   <超长正整数的加法>

   问题描述：实现两个超长正整数 (每个最长可达 80 位数字) 的加法运算
   输入格式：输入共两行, 每一行表示一个超长正整数 (要考虑输入高位可能为 0 的情况, 如 00083)
   输出格式：输出运算结果, 从高到低依次输出各位数字, 各位数字紧密输出
   输入样例：134098703578230056
            234098
   输出样例：134098703578464154
   
   算法：
        1. 将两个超长整数分别存放在两个字符串中, 每一位对应一个字符串中的字符
        2. 以较短的超长整数为基准, 从低位到高位, 对应位转换成数字后相加, 再加上前一位相加的进位, 得到的和模 10 再转换为字符即为当前位, 得到的和整除 10 即为当前位的进位, 将计算得到的每一位保存到结果字符数组
        3. 将较长字符串的剩余位加上最后一个进位移到结构数组后面
        4. 将结果数组反序输出 (去掉高位多余的 0)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[128], b[128], r[128] = "00000000000000";
	char *longer, *shorter;
	static int temp = 0;
	int i, j, lengthOfLonger, lengthOfShorter;

	scanf("%s %s", a, b);
	if (strlen(a) > strlen(b)) {
		longer = a;
		shorter = b;
	} 
	else {
		longer = b;
		shorter = a;
	}
	lengthOfLonger = strlen(longer);
	lengthOfShorter = strlen(shorter);

	for (i=lengthOfShorter-1, j=lengthOfLonger-1; i>=0; i--, j--) {	
		r[j+1] = longer[j] + shorter[i] - '0' + temp;
		if (r[j+1] > '9') {
			r[j+1] -= 10;
			temp = 1;
		} 
		else
			temp = 0;
	}
	for (; j>=0; j--) {
		r[j+1] = longer[j] + temp;
		if (r[j+1] > '9') {
			r[j+1] -= 10;
			temp = 1;
		} 
		else
			temp = 0;
	}
	r[j+1] = temp + '0';
	for (i=0; r[i] == '0'; i++)
		;
	for (; i < lengthOfLonger+1; i++)
		printf("%c", r[i]);
	printf("\n");

	system("pause");
	return 0;
}