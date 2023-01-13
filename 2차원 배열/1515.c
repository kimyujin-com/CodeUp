#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int t1[26][26];
int t2[26][26];

void makeTable2(int i, int j, int sum)
{
	if (t1[i][j] == 0) {
		if (sum == 3)
			t2[i][j] = 1;
	}
	else if (sum >= 2 && sum <= 3)
		t2[i][j] = 1;
	else
		t2[i][j] = 0;
}

void makeTable()
{
	int i, j, sum = 0;

	for (i = 0; i < 25; i++)
		for (j = 0; j < 25; j++) {
			sum = 0;
			if (i - 1 >= 0) {
				sum += t1[i - 1][j];
				if (j - 1 >= 0) 
					sum += t1[i - 1][j - 1];
				if (j + 1 < 25) 
					sum += t1[i - 1][j + 1];
			}
			if (j - 1 >= 0)
				sum += t1[i][j - 1];
			if (j + 1 < 25)
				sum += t1[i][j + 1];
			if (i + 1 < 25) {
				sum += t1[i + 1][j];
				if (j - 1 >= 0)
					sum += t1[i + 1][j - 1];
				if (j + 1 < 25)
					sum += t1[i + 1][j + 1];
			}
			makeTable2(i, j, sum);
		}
}


void printTable()
{
	int i, j;

	for (i = 0; i < 25; i++) {
		for (j = 0; j < 25; j++)
			printf("%d ", t2[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int i, j;

	for (i = 0; i < 25; i++)
		for (j = 0; j < 25; j++)
			scanf("%d", &t1[i][j]);

	makeTable();
	printTable();
}
