#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int t[100][100];
int findBomb(int r, int c)
{
	int sum = 0;

	if (r - 1 >= 0) {
		sum += t[r - 1][c];
		if (c - 1 >= 0)
			sum += t[r - 1][c - 1];
		if (c + 1 < 9)
			sum += t[r - 1][c + 1];
	}
	if (c - 1 >= 0)
		sum += t[r][c - 1];
	if (c + 1 < 9)
		sum += t[r][c + 1];
	if (r + 1 < 9) {
		sum += t[r + 1][c];
		if (c - 1 >= 0)
			sum += t[r + 1][c - 1];
		if (c + 1 < 9)
			sum += t[r + 1][c + 1];
	}
	return sum;
}

int main(void)
{
	int i, j;
	int r, c;

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			scanf("%d", &t[i][j]);
	scanf("%d %d", &r, &c);

	if (t[r - 1][c - 1] == 1)
		printf("-1\n");
	else
		printf("%d\n", findBomb(r - 1, c - 1));
}
