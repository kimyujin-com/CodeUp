#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int t1[170][170];
int t2[170][170];
int a, b;
int x, y, z;
int k;

void makeTable()
{
	int i, j, sum = 0;

	for (i = 0; i < a; i++)
		for (j = 0; j < b; j++) {
			sum = 0;
			if (i - 1 >= 0) {
				sum += t1[i - 1][j];
				if (j - 1 >= 0)
					sum += t1[i - 1][j - 1];
				if (j + 1 < b)
					sum += t1[i - 1][j + 1];
			}
			if (j - 1 >= 0)
				sum += t1[i][j - 1];
			if (j + 1 < b)
				sum += t1[i][j + 1];
			if (i + 1 < a) {
				sum += t1[i + 1][j];
				if (j - 1 >= 0)
					sum += t1[i + 1][j - 1];
				if (j + 1 < b)
					sum += t1[i + 1][j + 1];
			}

			if (t1[i][j] == 0) {
				if (sum == x)
					t2[i][j] = 1;
			}
			else if (sum >= y && sum < z)
				t2[i][j] = 1;
			else
				t2[i][j] = 0;
		}
}

void copyTable()
{
	int i, j;

	for (i = 0; i < a; i++)
		for (j = 0; j < b; j++)
			t1[i][j] = t2[i][j];
}

void printTable()
{
	int i, j;

	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++)
			printf("%d ", t2[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int i, j;

	scanf("%d %d", &a, &b);
	scanf("%d %d %d", &x, &y, &z);
	for (i = 0; i < a; i++)
		for (j = 0; j < b; j++)
			scanf("%d", &t1[i][j]);
	scanf("%d", &k);

	for (i = 0; i < k; i++) {
		makeTable();
		copyTable();
	}
	printTable();
}
