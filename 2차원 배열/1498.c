#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1[100], num2[100];
	int n, g;
	int i, j, limit;
	//int* p = num1;

	scanf("%d %d", &n, &g);
	for (i = 0; i < n; i++)
		scanf("%d", &num1[i]);

	if (n % g == 0)
		limit = n / g;
	else
		limit = n / g + 1;

	for (i = 0; i < 100; i++)//num[2] 초기화
		num2[i] = 1002;

	for (i = 0; i < limit; i++)
		for (j = i * g; j < (i + 1) * g;j++) 
			if (j < n)
				if (num2[i] > num1[j])
					num2[i] = num1[j];

	for (i = 0; i < limit; i++)
		printf("%d ", num2[i]);
}

