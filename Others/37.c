/*
   <猴子选大王>

   问题描述：要从 n 只猴子中选出一位大王, 它们决定使用下面的方法：n 只猴子围成一圈, 从 1 到 n 顺序编号。
            从第 q 只猴子开始, 从 1 到 m 报数, 凡报到 m 的猴子退出竞选。下一次从退出的那只猴子的下一只开始从 1 到 m 报数, 直至剩下的最后一只为大王, 请问最后哪只猴子被选为大王
   输入格式：输入三个整数 n, m, q
   输出格式：输出最后选为大王的猴子编号
   输入样例：7  4  3
   输出样例：4
*/

#include<stdio.h>
#include<stdlib.h>

struct monkey {
	int serialNum;
	struct monkey *next;
};

int main()
{
	int n, m ,q;
	int i;

	struct monkey *first = (struct monkey *)malloc(sizeof(struct monkey));
	struct monkey *ptr = first;
	struct monkey *temp;

	scanf("%d %d %d", &n, &m, &q);

	for (i = 0; i < n; i++) { 
		ptr->serialNum = i + 1;
		ptr->next = (struct monkey *)malloc(sizeof(struct monkey));
		if (i != n-1) {
			ptr = ptr->next;
		}	
	}
	ptr->next = first;
	
	for (i = 0; i < q; i++) {
		ptr = ptr->next;
	}
	while (ptr->next != ptr) {
		for (i = 0; i < m - 2; i++)
			ptr = ptr->next;
		temp = ptr->next;
		ptr->next = ptr->next->next;
		free(temp);
		ptr = ptr->next;
	}
	printf("%d\n", ptr->serialNum);

	system("pause");
	return 0;
}