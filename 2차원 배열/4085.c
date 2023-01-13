#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int t[101][101];
int getSum(int sX, int sY, int x, int y)//시작점 sX, sY
{
	int i, j, sum = 0;

	for (i = sX; i < sX + y; i++)
		for (j = sY; j < sY + x; j++)
			sum += t[i][j];
	return sum;
}

int main(void)
{
	int m, n, x, y;
	int i, j, k = 0;
	int max = -1, sum;

	scanf("%d %d %d %d", &m, &n, &x, &y);//5724

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			scanf("%d", &t[i][j]);

	for(i = 1; i <= n - y + 1; i++)
		for (j = 1; j <= m - x + 1; j++) {
			sum = getSum(i, j, x, y);
			if (max < sum)
				max = sum;
		}
	printf("%d\n", max);
}
