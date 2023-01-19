//2진수 변환
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void to_binary(int n) {
	if (n / 2)
		to_binary(n / 2);
	printf("%d", n % 2);
}
int main(void)
{
	int num;
	scanf("%d", &num);
	to_binary(num);
}
