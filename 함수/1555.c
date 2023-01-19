#include <stdio.h>

int n;




long long f(int num) {
	long long sum = 0;
	int i;
	for (i = 1; i <= num; i++)
		sum += i;
	return sum;
}
int main()
{
  scanf("%d", &n);
  printf("%lld\n", f(n));
}
