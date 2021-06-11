/* 问题描述：某些数能分解成若干个连续整数的和的形式, 如：
                                                    15 = 1 + 2 + 3 + 4 + 5
                                                    15 = 4 + 5 + 6
                                                    15 = 7 + 8
   输入格式：一个正整数 N (N ≤ 10000)
   输出格式：N 对应的所有分解组合。按照每个分解中的最小整数从小到大输出, 每个分解占一行。
            每个数字之间有一个空格 (每行最后保留一个空格); 如果没有任何分解组合, 则输出 None
   输入样例：15
   输出样例：1 2 3 4 5
            4 5 6
			7 8

   算法：任何可以分解的正整数必满足：(start+end)(end-start+1) / 2 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int mark = 0;  // 标记位
	scanf("%d", &n);
	int i, j, k;
	for(i=1; i<n; i++){
		for(j=i+1; j<n; j++){
			int sum = (i+j)*(j-i+1)/2;
			if(sum == n){
				mark = 1;
				for(k=i; k<=j; k++)
					printf("%d ", k);
				printf("\n");
			}
			if(sum > n) break;
		}
	}
	if(mark == 0) printf("None");

	system("pause");
	return 0;
}