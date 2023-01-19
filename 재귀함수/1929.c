#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hail(int n)
{
    if (n != 1) {
        if (n % 2 == 0)
            hail(n / 2);
        else
            hail(n * 3 + 1);
    }
    printf("%d\n", n);
}

int main()
{
    int n;

    scanf("%d", &n);

    hail(n);
}
