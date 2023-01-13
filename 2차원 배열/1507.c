#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int table[100][100];
void makeTable(int x1, int y1, int x2, int y2)
{
	int i, j;

	for (i = x1; i < x2; i++)
		for (j = y1; j < y2; j++)
			table[i][j] = 1;
}

int getArea()
{
	int i, j, sum = 0;

	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			if (table[i][j] == 1)
				sum++;
	return sum;
}

int main(void)
{
	int x1, y1, x2, y2;
	int i, j;

	for (i = 0; i < 100; i++)
		for (j = 0; j < 100; j++)
			table[i][j] = 0;

	for (i = 0; i < 4; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		makeTable(x1, y1, x2, y2);
	}
	/**for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++)
			printf("%d", table[i][j]);
		printf("\n");
	}**/
	printf("%d\n", getArea());
}
