#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m, num[100][100], sum[100][100] = { 0 };
	int i, j, k, h;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			scanf("%d", &num[i][j]);

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			for (k = 0; k <= i; k++)
				for (h = 0; h <= j; h++)
					sum[i][j] += num[k][h];

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", sum[i][j]);
		printf("\n");
	}
}
