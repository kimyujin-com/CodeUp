//데이터를 입력받아 내림차순으로 정렬하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, n, keep, num[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (num[i] < num[j]) {
				keep = num[i];
				num[i] = num[j];
				num[j] = keep;
			}
	for (i = 0; i < n; i++)
		printf("%d ", num[i]);
}
