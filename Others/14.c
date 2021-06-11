/*
   <时钟指针>

   问题描述：在任意时刻时针和分针都有一个夹角, 并且假设时针和分针都是连续移动的。现已知当前的时刻, 试求出该时刻时针和分针的夹角 A (0 ≤ A ≤ 180)
   输入格式：读入一个 24 小时制的时间 (以 : 分隔的两个整数 m (0≤m≤23)、n (0≤n≤59))
   输出格式：输出一个浮点数 A (时针和分针夹角的角度值), 该浮点数保留 3 位小数
   输入样例：8:10
   输出样例：175.000
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float finalDegree, fenDegree, shiDegree, shiPianYiDegree, shi, fen;

	scanf("%f:%f", &shi, &fen);

	if(shi > 12)
		shi = shi - 12;

	fenDegree = (fen/60.0)*360.0;
	shiDegree = (shi/12)*360.0;
	shiPianYiDegree = 30*(fenDegree/360.0);
	finalDegree = fenDegree - (shiDegree + shiPianYiDegree);

	if(finalDegree < 0){
		finalDegree = 0-finalDegree;
	}

	if(finalDegree >180.0 ){
		finalDegree = 360.0 -finalDegree;
	}

	printf("%.3f\n", finalDegree);

    system("pause");
	return 0;
}