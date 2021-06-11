/*
   <统计整数>

   问题描述：输入若干个整数, 统计出现次数最多的那个整数。如果出现最多的整数有两个以上, 打印最早输入的那个整数
   输入格式：第一行输入一个数字 N (1 ≤ N ≤ 10000), 代表整数的个数。以后的 N 行每行有一个整数
   输出格式：输出出现次数最多的数字
   输入样例：6
            11
            0
           -1
            20
            0
            300
   输出样例：0
*/

#include<stdio.h>
#include<stdlib.h>

struct integer {
	int num;
	int count;
};

int main()
{
	struct integer integertab[10001] = {0};
	int integers[10001];
	int isTheSame = 0;
	int numOfInteger;
	int i, j, k;

	scanf("%d", &numOfInteger);
	for (i = 0; i<numOfInteger; i++)
		scanf("%d", &integers[i]);

	k = 0;
	integertab[k].num = integers[0];
	for (i = 0; i<numOfInteger; i++) {
		for (j=0; j<=k; j++) {
			if (integers[i] == integertab[j].num) {
				integertab[j].count++;
				isTheSame = 1;
				break;
			} 
			else
				isTheSame = 0;
		}
		if (!isTheSame) {
			integertab[++k].num = integers[i];
			integertab[k].count++;
		}
	}

	j = 0;
	for (i=0; i<k; i++)
		if (integertab[i].count > integertab[j].count)
			j = i;
	printf("%d\n", integertab[j].num);

	system("pause");
	return 0;
}