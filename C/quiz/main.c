#include <stdio.h>
#include <stdlib.h>
char perfect (int );
int main()
{int n;
printf("inter a integar number\n");
scanf("%d",&n);
  if(perfect(n)=='p')
    printf("%d is Perfect number",n);
    else if(perfect(n)=='n')
    printf("%d is not Perfect number",n);
    return 0;
}
char perfect (int x)
{
  int i,n,Sum=0;
  for(i=1,n=0;i<=x;i++)
  {
      n=x/i;
      Sum=Sum+n;
  }
  if (Sum==x)
    return 'p';
  else
    return 'n';
}
