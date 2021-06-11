/*
   <学生记录>

   问题描述：输入不超过 50 个学生的学生信息 (包括空格隔开的姓名、学号、年龄信息, 以学号从低到高排序)
   输入格式：第一行为学生人数; 后面每一行为空格隔开的 学号、姓名、年龄 (学号和年龄都是整数)
   输出格式：分别以姓名顺序 (从低到高) 和年龄顺序 (从低到高) 将学生信息输出, 每行输出一位学生的信息, 其中学号占 3 位, 姓名 (英文) 占 6 位, 年龄占 3 位, 均为右对齐。年龄相同时按姓名从低到高排序, 两种顺序的输出结果用一行空行相隔
   输入样例：
            4
            41603401 aaa 22
            41603407 bbb 23
            41603403 ddd 20
            41603410 ccc 19
   输出样例：
            41603401 aaa 22
            41603407 bbb 23
			41603410 ccc 19
            41603403 ddd 20

			41603410 ccc 19
			41603403 ddd 20
			41603401 aaa 22
            41603407 bbb 23
            
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
	char name[32];
	int num;
	int age;
};

int main()
{
	int n;
	int i, j, index;
	
	struct student temp;
	struct student stu[100];

	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d %s %d", &stu[i].num, stu[i].name, &stu[i].age);
	
	for (i=0; i<n; i++) {
		index = i;
		for (j=i; j<n; j++)
			if (strcmp(stu[j].name, stu[index].name) < 0)
				index = j;
		temp = stu[i];
		stu[i] = stu[index];
		stu[index] = temp;
	}
	for (i=0; i<n; i++)
		printf("%3d%6s%3d\n", stu[i].num, stu[i].name, stu[i].age);
	printf("\n");

	for (i=0; i<n; i++) {
		index = i;
		for (j=i; j<n; j++)
			if (stu[j].age < stu[index].age)
				index = j;
		temp = stu[i];
		stu[i] = stu[index];
		stu[index] = temp;
	}
	for (i=0; i<n; i++)
		printf("%3d%6s%3d\n", stu[i].num, stu[i].name, stu[i].age);

	system("pause");
	return 0;
}