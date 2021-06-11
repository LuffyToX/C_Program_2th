/*
   <杨辉三角>

   问题描述: 打印如下杨辉三角：
                            1
                         1      1
                     1      2      1
                 1       3     3       1
             1       4      6      4       1
         1       5      10     10      5       1
        …      …      …     …      …      …      …
   输入格式：输入整数 n (n ≥ 0)
   输出格式：输出 n+1 行杨辉三角形
   输入样例：3
   输出样例：                1
                         1      1
                     1      2      1
                 1       3     3       1
*/

#include<stdio.h>
#include<stdlib.h>

int getnum(int i, int j);
void pn(int n);
void ps(int n);

int main()
{
	int i, j, num;
	scanf("%d", &num);
	for (i=1; i<=num+1; i++) {
			ps(2*(num-i+1));
		for(j=1; j<=(i%2 ? (i+1)/2 : i/2) ; j++)
			pn(getnum(i, j));
		j = (i%2 ? (j-2) : (j-1));
		for(; j>0; j--)
			pn(getnum(i, j));	
		printf("\n"); 
	}
    
	system("pause");
	return 0;
}

int getnum(int i, int j)
{
	if (i == 1 || j == 1 || i == j) {
		return 1;
	} else return getnum(i-1, j-1) + getnum(i-1, j);
}

void pn(int n)
{
	printf("%4d", n);
}

void ps(int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf(" ");
}