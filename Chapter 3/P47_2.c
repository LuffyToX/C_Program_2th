/* 折半查找（数组已按升序或降序排好） 版本2 */

#include <stdio.h>

int binsearch(int x, int v[], int n);

main() {
	int x = 5;
	int v[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("The location is:  %d", binsearch(x, v, 10));

	getchar();
	return 0;
}

// 折半查找，数组已按升序或降序排好（x 要查找的值，v[] 一维数组，n 数组大小）
int binsearch(int x, int v[], int n)
{
	int low = 0;
	int high = n - 1;
	int mid = (low + high) / 2;

	while (low <= high && x != v[mid]) {
		if (x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low + high) / 2;
	}

	if (x == v[mid])
		return mid;
	else
		return -1;
}