#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1부터 정수 n까지 출력하는 재귀함수를 설계하시오.
void printNum(int num)
{
	if (num >= 1) {
		printNum(num - 1);
		printf("%d\n", num);
	}
}
int main(void)
{
	int n;

	scanf("%d", &n);
	printNum(n);
}
