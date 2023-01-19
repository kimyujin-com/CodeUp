//자연수 N을 입력받아 N번째 피보나치 수를 출력하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibo(n - 2) + fibo(n - 1);
}
int main(void)
{
	int n;

	scanf("%d", &n);
	printf("%d\n", fibo(n));
}
