#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
int mid(int p, int q, int r) {
	if (p <= q && q <= r || r <= q && q <= p)
		return q;
	else if (p <= r && r <= q || q <= r && r <= p)
		return r;
	else 
		return p;
}
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}
