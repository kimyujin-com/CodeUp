#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, num[100], sum[100] = { 0 };
	int i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < n; i++)
		for (j = 0; j <= i; j++)
			sum[i] += num[j];

	for (i = 0; i < n; i++)
		printf("%d ", sum[i]);
}
