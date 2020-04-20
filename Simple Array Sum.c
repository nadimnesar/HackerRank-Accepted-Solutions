#include <stdio.h>
int main ()
{
    int n, sum, c, value;
    sum=0;
    scanf("%d", &n);
    for (c=1 ; c<=n; c++)
    {
        scanf("%d", &value);
        sum=sum+value;
    }
    printf("%d", sum);
}
