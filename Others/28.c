/*
   <凸多边形面积>

   问题描述：给出平面上一组顶点的坐标, 计算出它们所围成的凸多边形的面积
   输入格式：输入读取顶点坐标, 共 N+1 行, 第一行：点的个数 N (3 ≤ N ≤ 15)
                                       后 N 行：每行两个数字 (由空格隔开), 分别表示该点的 X、Y 坐标 (0 ≤ X, Y ≤ 32767)。所有点的坐标互不相同, 且按顺时针次序给出, 输入数据确保该多边形是一个凸多边形
   输出格式：输出一个浮点数, 表示该多边形的面积 (保留两位小数)
   输入样例：4
            3　3
            3　0
            1　0
            1　2
   输出样例：5.00
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void getPoints(int x[], int y[], int n);
double getArea(int x[], int y[], int n);
double getLength(int x1, int y1, int x2, int y2);

int main()
{
	int x[32] = {0}, y[32] = {0};
	int n;
	double area;

	scanf("%d", &n);
	getPoints(x, y, n);
	area = getArea(x, y, n);
	if (n != 10)
		printf("%.2f\n", area);
	else printf("%.2f\n", area);

	system("pause");
	return 0;
}

void getPoints(int x[], int y[], int n)
{
	int i;
	for (i=0; i<n; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
}

double getArea(int x[], int y[], int n)
{
	double area = 0;
	double a, b, c, t;
	int i;
	for (i=2; i<n; i++) {
		a = getLength(x[0], y[0], x[i-1], y[i-1]);
		b = getLength(x[0], y[0], x[i], y[i]);
		c = getLength(x[i-1], y[i-1], x[i], y[i]);
		t = (a+b+c) / 2;
		area += sqrt(t * (t-a) * (t-b) * (t-c));
	}
	return area;
}

double getLength(int x1, int y1, int x2, int y2)
{
	double length;
	length = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
	return length;
}