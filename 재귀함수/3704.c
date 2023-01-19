#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int memo[100001];
int stairs(int n)
{
	if (n < 0)
		return 0;
	else if (n == 0)
		return 1;
	else if (!memo[n])
		memo[n] = (stairs(n - 1) + stairs(n - 2) + stairs(n - 3)) % 1000;
	return memo[n];
}
int main(void) 
{
	int n;

	scanf("%d", &n);
	printf("%d\n" ,stairs(n));
}
