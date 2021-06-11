/* 问题描述：孪生数定义：如果 A 的约数 (因数, 包含 1 但不包含 A 本身) 之和等于 B, 且 B 的约数之和等于 A, 则称 A 和 B 为孪生数 (A ≠ B)
            找出正整数 M 和 N 之间的孪生数
   输入格式：输入两个正整数 M 和 N (1 ≤ M < N ≤ 20000), 中间用空格分隔
   输出格式：输出 M 和 N 之间 (包括 M、N) 的所有孪生数对
            每行输出一对孪生数, 用空格分隔, 小的先输出
			各行孪生数按照第一个数的从小到大顺序输出
			如果没有符合要求的孪生数对, 则输出 None
   输入样例：20 300
   输出样例：220 284 */


#include<stdio.h>
#include<stdlib.h>

int sum[10000];
int mark = 0;  // 标记位 (C 语言没有 Bool 类型)
int main()
{
	int m,n;
	scanf("%d%d", &m, &n);
	int i, j;
	for(i=m; i<=n; i++){
		sum[i] = 0;
		for(j=1; j<i; j++)
			if(i%j==0)	sum[i]+=j;
	}

	for(i=m; i<n; i++){
		for(j=i+1; j<=n; j++){
			if(sum[i]==j && sum[j]==i){
				printf("%d %d\n", i, j);
				mark = 1;
			}
		}
	}

	if(mark == 0) printf("None");

	system("pause");
	return 0;
}