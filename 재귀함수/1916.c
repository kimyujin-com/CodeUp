//자연수 N을 입력받아 N번째 피보나치 수를 출력하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long fibo(long long n)
{
	static int fiboA[200] = { 0 };

	if (fiboA[n - 1] != 0)
		return fiboA[n - 1];
	else if (n == 1 || n == 2)
		fiboA[n - 1] = 1;
	else
		fiboA[n - 1] = (fibo(n - 2) + fibo(n - 1)) % 10009;
	return fiboA[n - 1];
}
int main(void)
{
	long long n;

	scanf("%lld", &n);
	printf("%lld\n", fibo(n) % 10009);
}
