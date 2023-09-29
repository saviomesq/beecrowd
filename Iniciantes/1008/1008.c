#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%f",&n3);

    printf("NUMBER = %d\n", n1);
    printf("SALARY = U$ %.2f\n", n2*n3);


    return 0;
}
