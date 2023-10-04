#include <stdio.h>

int main()
{
    int n, aux = 0;
    scanf("%d", &n);
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        int b=a*a;
        printf("%d %d %d\n", a, a*a, b*a);
        printf("%d %d %d\n", a, a*a+1, b*a+1);

        a++;
    }

    return 0;
}
