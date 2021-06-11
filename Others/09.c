/*
   <找最大最小整数>

   问题描述：输入若干整数, 找出其中的最大最小数
   输入格式：输入共两行：第一行是待输入的数据个数
                       第二行是数据, 用空格分开
   输出格式：输出上述数据的最大最小值, 用空格分开
   输入样例：5
            89 62 96 74 52   
   输出样例：96 52
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, max, min, i;
	int num[1024];
	scanf("%d\n", &n);
	max = 0;
	min = 9999;
	for(i=0; i<=n-1; i++){
		scanf("%d ", &num[i]);
		
		if(max<=num[i]){
			max=num[i];
		}
		if(min>=num[i]){
			min=num[i];
		}
	}

	printf("%d %d\n", max, min);

	system("pause");
	return 0;
}


