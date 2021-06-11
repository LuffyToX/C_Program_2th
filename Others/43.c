/* <阶乘>

   输入格式：输入一个正整数
   输出格式：第一行：先输出数本身、然后是一个逗号 (,)、然后是这个数字的各位数字的阶乘和、然后是一个等号 (=)、最后是阶乘和的计算结果
            第二行：如果阶乘和等于原数, 输出 YES; 否则输出 NO 
   输入样例：145
   输出样例：145,1!+4!5!=145
            YES */


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	int buf1[100];
	int buf2[100];
	scanf("%d", &n);
	printf("%d,", n);
	int m = n;
	int i = 0, j = 0;;
	while(m !=0 ){
		buf1[i++] = m%10;
		m /= 10;
	}
	int sum = 0;
	int ans;
	for(j=0; j<i; j++){
		int tmp = buf1[j];
		ans = 1;
		while(tmp != 0){
			ans *= tmp;
			tmp--;
		}
		sum += ans;
	}
	for(; j-1>=0; j--){
		if(j-1 != 0) printf("%d!+", buf1[j-1]);
		else	     printf("%d!=%d\n", buf1[j-1], sum);
	}

	if(sum == n) printf("Yes");
	else         printf("No");
	
	system("pause");
	return 0;
}