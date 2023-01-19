#include <stdio.h>

int a, n;
long long pow(int a, int n) {
	int i;
	long long result = 1;

	if (a == 1)//a가 1일 경우 불필요한 중복을 없애기 위해
		result = 1;
	else
		for (i = 0; i < n; i++)
			result *= a;
	return result;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}
