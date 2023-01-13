//키가 가장 큰 난장이와 두 번째로 큰 난장이의 키를 출력하는 프로그램을 작성하시오.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j, keep, height[7];

	for (i = 0; i < 7; i++)
		scanf("%d", &height[i]);

	for (i = 0; i < 7; i++)
		for (j = i + 1; j < 7; j++)
			if (height[i] < height[j]) {
				keep = height[i];
				height[i] = height[j];
				height[j] = keep;
			}
	
	for (i = 0; i < 2; i++)
		printf("%d\n", height[i]);
}
