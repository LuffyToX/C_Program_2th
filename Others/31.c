/*
   <矩阵运算>

   问题描述：对于多个 N 阶矩阵, 依次进行加、减运算
   输入格式：第一行只有一个整数 N (1 ≤ N ≤ 10), 代表矩阵的阶数
            接下来是一个矩阵, 是 N 行, 每行有 N 个整数 (可能是正、负整数), 是矩阵的所有元素
			然后一行只含一个字符 '+'/'-', 代表加、减操作
			然后用同样的方式输入另一个矩阵
			后续仍然是运算符和矩阵, 直至运算符为 '#' 时停止计算, 将结果输出
   输出格式：输出矩阵的操作结果。输出 N 行, 每行对应矩阵在该行上的所有元素, 每一行末均输出一个回车符, 每个元素占 5 个字符宽度 (包括负号), 右对齐, 不足部分补以空格
   输入样例：
            3
            1  -2   7
            2   8  -5
            3   6   9
            +
            3   5   7
           -1   2   6
            3   7  10
            -
            1  -2   7
            2   8  -5
            3   6   9 
            #
   输出样例：   
                3    5    7
               -1    2    6
                3    7   10
*/

#include<stdio.h>
#include<stdlib.h>

void getMatrix(int m[][10], int n);
void putMatrix(int r[][10], int n);
void calculateMatrix(int m[][10], int r[][10], int n, char op);

int main()
{
	int n;
	char op;
	int currentInputMatrix[10][10] = {0};
	int resultMatrix[10][10] = {0};

	scanf("%d", &n);
	getMatrix(currentInputMatrix, n);

	op = '=';
	calculateMatrix(currentInputMatrix, resultMatrix, n, op);

	while ((op = getchar())!='#' && (op = getchar())!='#') {
		getMatrix(currentInputMatrix, n);
		calculateMatrix(currentInputMatrix, resultMatrix, n, op);
	}

	putMatrix(resultMatrix, n);

	system("pause");
	return 0;
}

void getMatrix(int m[][10], int n)
{
	int i, j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			scanf("%d", &m[i][j]);
		}
	}
}

void putMatrix(int r[][10], int n)
{
	int i, j;
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			printf("%5d", r[i][j]);
		}
		printf("\n");
	}
}

void calculateMatrix(int m[][10], int r[][10], int n, char op)
{
	int i, j;
	switch (op) {
	case '=':
		 {
			 for (i=0; i<n; i++) {
				 for (j=0; j<n; j++) {
					 r[i][j] = m[i][j];
				 }
			 }
			 break;
		 }
	case '+':
		 {
			 for (i=0; i<n; i++) {
				 for (j=0; j<n; j++) {
					 r[i][j] += m[i][j];
				 }
			 }
			 break;
		 }
	case '-':
		 {
			 for (i=0; i<n; i++) {
				 for (j=0; j<n; j++) {
					 r[i][j] -= m[i][j];
				 }
			 }
			 break;
		 }
	default:
		break;
	}
}