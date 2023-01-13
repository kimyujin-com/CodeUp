#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int table[50][50]; 
int main(void)
{
	int n;
	int i = 1, j,  k = 1;

	scanf("%d", &n);
	
	if (n % 2 == 0)
		j = n / 2;
	else
		j = n / 2 + 1;

	if (n == 1)
		printf("1\n");
	else {
		while (k <= n * n) {
			table[i][j] = k++;

			if (table[i][j] % n == 0)
				i++;
			else if (i - 1 >= 1 && j + 1 <= n) {
				i--;
				j++;
			}
			else if (j + 1 <= n) {
				i += (n - 1);
				j++;
			}
			else if (i - 1 >= 1) {
				i--;
				j -= (n - 1);
			}
			else {
				i--;
				j++;
			}
		}

		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++)
				printf("%d ", table[i][j]);
			printf("\n");
		}
	}
}
