/* 问题描述：将矩阵 A 中从替换位置开始的子矩阵 (与 B 同样大小) 替换为 B, 并输出替换后的矩阵
   输入格式：第一行：输入矩阵 A 的行数和列数 (1 ≤ row、column ≤ 20)
            然后输入矩阵 A, 各行数字以空格分隔
			以同样的方式输入矩阵 B
			最后一行输入替换位置 (两个数字用空格分隔, 行数和列数都从 1 开始计数)
   输出格式：输出替换后的矩阵, 每行中各数字之间用空格分隔           
   输入样例：3 4
            1 2 3 4
			2 3 4 5
			3 4 5 6
			2 3
			9 9 9
			9 9 9
			2 2 
   输出样例：1 2 3 4
            2 9 9 9
			3 9 9 9 */


#include<stdio.h>
#include<stdlib.h>

int a[20][20];
int b[10][10];

int main()
{
	int r1, c1, r2, c2;
    int i, j;

	// input matrix A
	scanf("%d%d", &r1, &c1);
	for(i=0; i<r1; i++)
		for(j=0; j<c1; j++)
			scanf("%d", &a[i][j]);

    // input matrix B
	scanf("%d%d", &r2, &c2);
	for(i=0; i<r2; i++)
		for(j=0; j<c2; j++)
			scanf("%d", &b[i][j]);
    
	// input position
	int posr, posc;
	scanf("%d%d", &posr, &posc);

	posr--;
	posc--;
	if(posr>r1 || posc>c1){
		for(i=0; i<r1; i++)
		    for(j=0; j<c1; j++)
			    printf("%d ", a[i][j]);
		printf("\n");
	}	
	else{
		for(i=posr; i<r1 && i-posr<r2; i++)
			for(j=posc; j<c1 && j-posc<c2; j++)
				a[i][j] = b[i-posr][j-posc];

		for(i=0; i<r1; i++){
			for(j=0;j<c1;j++)
				printf("%d ", a[i][j]);
			printf("\n");
		}

	}

	system("pause");
	return 0;
}