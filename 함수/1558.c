#include <stdio.h>

long long int n;

long long int f(long long int num) {
	int i;
	long long int remake = 0;
	for (i = 0; num > 0; i++) {
		remake = remake * 10 + num % 10;
		num /= 10;
	}
	return remake;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
