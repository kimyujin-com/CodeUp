// 어떤 자연수 n이 입력되면, n이 홀수이면 3n + 1을 하고,
//n이 짝수이면 n / 2를 한다. 이 n이 1이 될때까지 2 3과정을 반복한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void hail(int n)
{
    printf("%d\n", n);
    if (n == 1)
        return;
    else if (n % 2 == 0)
        hail(n / 2);
    else
        hail(n * 3 + 1);
}

int main()
{
    int n;

    scanf("%d", &n);

    hail(n);
}
