#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SuperSum(int k, int n)
{
	static int arr[22][22] = { 0 };
	int i;

	if (arr[k][n])
		return arr[k][n];
	else if (k == 0)
		arr[k][n] = n;
	else
		for (i = 1; i <= n; i++)
			arr[k][n] += SuperSum(k - 1, i);
	return arr[k][n];
}
int main()
{
	int k, n;

	while (scanf("%d%d", &k, &n) != EOF)
		printf("%d\n", SuperSum(k, n));
}
