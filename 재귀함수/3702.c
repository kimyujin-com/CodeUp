#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int memo[51][51];
int f(int r, int c)
{
	if (r == 1 || c == 1)
		memo[r][c] = 1;
	else if (!memo[r][c])
		memo[r][c] = (f(r - 1, c) + f(r, c - 1)) % 100000000;
	return memo[r][c];
}
int main()
{
	int r, c;

	scanf("%d %d", &r, &c);
	printf("%d\n", f(r, c));
}
