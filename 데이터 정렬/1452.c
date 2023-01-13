#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int data[100000];
int main() {
    int key;
    long long i, j, n;

	scanf("%lld", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &data[i]);

    for (i = 2; i <= n; i++)
    {
        key = data[i];
        // 이 부분에 들어가야 될 코드를 작성하여 제출
        for (j = i - 1; j >= 1 && key < data[j]; j--)
        {
            data[j + 1] = data[j];
        }
        data[j + 1] = key;
    }

    for (i = 1; i <= n; i++)
        printf("%d\n", data[i]);
}
