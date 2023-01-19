//정수 n이 입력으로 들어오면 1부터 n까지의 합을 구하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getSum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + getSum(n - 1);
}
int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%d\n", getSum(n));
}
