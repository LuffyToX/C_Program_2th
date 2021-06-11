/*
   <矩阵相交>

   问题描述：平面上有两个矩形 A 和 B, 其位置是任意的, 求其相交部分的面积 (0 ≤ a, b ≤ 1000)
   输入格式：输入共两行：第一行：Ax1 Ay1 Ax2 Ay2
                       第二行：Bx1 By1 Bx2 By2
            其中 (x1, y1)、(x2, y2) 为矩形对角线上端点的坐标, 各坐标值均为整数, 取值在 0 ~ 1000 之间
   输出格式：一个整数, 是两矩形相交部分的面积 (可能为 0), 在输出末尾要有一个回车符
   输入样例：0 0 2 2
            1 1 3 4
   输出样例：1
*/

#include<stdio.h>
#include<stdlib.h>

struct point {
	int x;
	int y;
} A1, A2, B1, B2;

struct rect {
	struct point p1;
	struct point p2;
} R1, R2;

struct point makepoint(int x, int y);
struct rect makerect(struct point p1, struct point p2);
struct rect guifanrect(struct rect R);

#define max(A,B) ((A)>(B)?(A):(B))
#define min(A,B) ((A)>(B)?(B):(A))

int main()
{
	int i, num1[4], num2[4], area;

	for(i=0; i<4; i++)
		scanf("%d", &num1[i]);
	for(i=0; i<4; i++)
		scanf("%d", &num2[i]);

	R1 = makerect(A1=makepoint(num1[0], num1[1]),
		A2 = makepoint(num1[2], num1[3]));
	R2 = makerect(B1=makepoint(num2[0], num2[1]),
		B2 = makepoint(num2[2], num2[3]));

	R1 = guifanrect(R1);
	R2 = guifanrect(R2);

	if( R1.p2.x <= R2.p1.x || R1.p2.y <= R2.p1.y || 
		R1.p1.x >= R2.p2.x || R1.p1.y >= R2.p2.y)
		area = 0;
	else
		area = abs(max(R1.p1.x, R2.p1.x) - min(R1.p2.x, R2.p2.x)) * 
				abs(max(R1.p1.y, R2.p1.y) - min(R1.p2.y, R2.p2.y));

	printf("%d\n", area);

	system("pause");
	return 0;
}

struct point makepoint(int x,int y)
{
	struct point temp;

	temp.x = x;
	temp.y = y;
	return temp;
}

struct rect makerect(struct point p1, struct point p2)
{
	struct rect temp;

	temp.p1 = p1;
	temp.p2 = p2;
	return temp;
}

struct rect guifanrect(struct rect r)
{
	struct rect temp;
	temp.p1.x = min (r.p1.x, r.p2.x);
	temp.p1.y = min (r.p1.y, r.p2.y);
	temp.p2.x = max (r.p1.x, r.p2.x);
	temp.p2.y = max (r.p1.y, r.p2.y);
	return temp;
}