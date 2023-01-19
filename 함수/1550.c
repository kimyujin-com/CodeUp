#include <stdio.h>

long long int n;



long long int sqrt(long long int n) {
	long long int i;

	for (i = 0; n >= i * i; i++);
	return i - 1;
	
}
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
