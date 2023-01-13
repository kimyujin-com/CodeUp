#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, j, keep, n, data[10000];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &data[i]);

	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (data[j] < data[i]) {
				keep = data[i];
				data[i] = data[j];
				data[j] = keep;
			}
	for (i = 0; i < n; i++)
		printf("%d\n", data[i]);
}
