#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int table[12][12];
int main(void)
{
	int i, j, flag = 1;

	for (i = 0; i < 11; i++)
		for (j = 0; j < 10; j++)
			scanf("%d", &table[i][j]);
	
	for (j = 0; j < 10; j++) {
		flag = 1;
		if (table[10][j] == 1) {
			for (i = 9; i >= 0; i--) {
				if (table[i][j] > 0) {
					printf("%d crash\n", j + 1);
					flag = 0;
					break;
				}
				else if (table[i][j] < 0) {
					printf("%d fall\n", j + 1);
					flag = 0;
					break;
				}
			}
			if (flag == 1)
				printf("%d safe\n", j + 1);
		}
	}
}
