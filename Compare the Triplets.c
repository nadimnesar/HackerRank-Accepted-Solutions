#include <stdio.h>
int main()
{
  int i, j=0, k=0, a[3], b[3];
  for (i=1; i<=3; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i=1; i<=3; i++) {
    scanf("%d", &b[i]);
  }
  for (i=1; i<=3; i++)
  {
      if (a[i]>b[i]) {
        j=j+1;
      }
      else if (a[i]<b[i]) {
        k=k+1;
      }
      else if (a[i]==b[i]) {
        k=k+0;
        j=j+0;
      }
  }
  printf("%d %d", j, k);
  }
