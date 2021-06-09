/* 折半查找（数组已按升序或降序排好） 版本1 */

#include <stdio.h>

int binsearch(int x, int v[], int n);

main() {
	int x = 5;
	int v[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printf("The location is: %d", binsearch(x, v, 10));

    getchar();
	return 0;
}

// 折半查找，数组已按升序或降序排好（x 要查找的值，v[] 一维数组，n 数组大小）
int binsearch(int x, int v[], int n)
{
	int low = 0;
	int high = n - 1;
    int mid;

	while (low <= high) {
        mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if(x > v[mid])
			low = mid + 1;
        else
            return mid; // 找到了匹配的值
		
	}
	return -1;          // 没有找到匹配的值
}