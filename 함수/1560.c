#include <stdio.h>

long long int n, m;
long long int f(long long int n, long long int m) {
	long long int result;
	result = n - m;
	if (result > 0)
		return result;
	else
		return -result;
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
