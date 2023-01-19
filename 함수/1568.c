#include <stdio.h>

int n, a, b, d[1010];
int maxi(int a, int b) {
    int i, maxIndex = a;

    for (i = a; i <= b; i++)
            if (d[maxIndex] < d[i])
                maxIndex = i;
    return maxIndex;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%d\n", maxi(a, b));
}
