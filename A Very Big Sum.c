#include <stdio.h>
int main()
{
    long long int a, sum=0, i, b[10];
    scanf("%lld", &a);
    for (i=1; i<=a; i++)
    {
        scanf("%lld", &b[i]);
        sum=sum+b[i];
    }
    printf("%lld", sum);
    return 0;
}
