/* <相亲数>

   问题描述：相亲数：对于两个大于 1 的正整数 x、y, 如果 x 除了本身以外的因子之和等于 y; y 除了本身以外的因子之和等于 x, 则称 x、y 是一对相亲数
            分别计算 x、y 除本身以外的因子之和, 并判断 x、y 是否为一对相亲数
   输入格式：输入两个整数, 用空格隔开
   输出格式：第一行：x、一个逗号(,)、x 除了本身以外的因子之和的计算过程 (降序输出每个因子, 不要多余的空格)
            第二行：y、一个逗号(,)、y 除了本身以外的因子之和的计算过程 (降序输出每个因子, 不要多余的空格)
			第三行：如果 x、y 是一对相亲数, 输出 1; 否则, 输出 0
   输入样例：220 284
   输出样例：220,110+55+44+22+20+11+10+5+4+2+1=284
            284,142+71+4+2+1=220
			1 */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int ans1[100], ans2[100];
	int i, j, k;
	int sum1=0, sum2=0;;
	j = 0;
	k = 0;
	printf("%d,", a);
	for(i=1; i<a; i++){
		if(a%i == 0)	{
			ans1[j++] = i;
			if(i==1) printf("%d", ans1[j-1]);
			else printf("+%d", ans1[j-1]);
			sum1 += ans1[j-1];
		}
	}
	printf("=%d\n", sum1);
	printf("%d,", b);
	for(i=1; i<b; i++){
		if(b%i == 0){
			ans2[k++] = i;
			if(i==1) printf("%d", ans2[k-1]);
			else printf("+%d",ans2[k-1]);
			sum2 += ans2[k-1];	
		}
	}
	printf("=%d\n", sum2);
	if(sum1==b && sum2==a) printf("1");
	else printf("0");

	system("pause");
	return 0;
}