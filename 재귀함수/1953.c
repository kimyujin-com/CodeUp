#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void make_star(int n) {
	if (n > 0) {
		printf("*");
		make_star(n - 1);
	}
}
void sequence(int number) {
	if (number > 0) {
		sequence(number - 1);
		make_star(number);
		printf("\n");
	}
}
int main(void)
{
	int num;
	scanf("%d", &num);
	sequence(num);
}
