#include <stdio.h>

int n;



void f(int n) {
	int i, flag = 0;
	
	for (i = 2; i < n; i++)
		if (n % i == 0) {
			flag = 1;
			break;
		}
	if (flag)
		printf("composite\n");
	else
		printf("prime\n");
	return;
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
