#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int table[100][100];
void makeTable(int n)
{
	int i, j, k = 1;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			table[i][j] = k++;
}
int getSum(int n)
{
	int i, j, sum = 0;
	int row = 0, col = -1, set = 0, reverse = 1;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < n - set; j++) {
			col += reverse;
			sum += table[row][col];
		}
		for (j = 0; j < n - set - 1; j++) {
			row += reverse;
			sum += table[row][col];
		}
		reverse *= -1;
		set++;
	}
	return sum;
}
int main(void)
{
	int n;
	
	scanf("%d", &n);

	makeTable(n);
	printf("%d\n", getSum(n));
}
