#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1[100], num2[50];
	int n, i;
	int* p = num1;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num1[i]);

	for (i = 0; i < n / 2; i++) {
		if (*p < *(p + 1))
			num2[i] = *p;
		else
			num2[i] = *(p + 1);
		p += 2;
	}
	for (i = 0; i < n / 2; i++)
		printf("%d ", num2[i]);
}
