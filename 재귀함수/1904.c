#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//a부터 b까지의 모든 홀수를 출력하시오.
void getOdd(int a, int b)
{
	if (a > b)
		return;
	else if (a % 2 != 0) {//홀수일 경우
		printf("%d ", a);
		getOdd(a + 2, b);
	}
	else//짝수일 경우
		getOdd(a + 1, b);
}
int main(void)
{
	int a, b;

	scanf("%d %d", &a, &b);
	getOdd(a, b);
}
