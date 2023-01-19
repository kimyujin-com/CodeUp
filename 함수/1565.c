#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long lcm(long long c, long long d) {
	int gcdNum;
	long long lcdNum;

	gcdNum = gcd(c, d);
	lcdNum = gcdNum * c / gcdNum * d / gcdNum;
	return lcdNum;
}
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}
