//Mouath_Sami_Masalmah,No:1220179,Section:6,Dr:Wahbeh_Mousa.
#include <stdio.h>
#include <stdlib.h>
int is_magical(int );
int main()
{
    int x;
    while(x != -1)
    {
    printf("Enter a positive integers number\n");
    scanf("%d",&x);
      if(x>=0)
      {
          if(is_magical(x)==1)
            printf("%d is a magical number\n",x);
          else
            printf("%d is not a magical number\n",x);
      }
      else if(x == -1)
        break;
      else
      printf("Error Number\n");
    }
    return 0;
}

int is_magical(int x)
{
  int n,sum=0;
  while(sum>9 || x > 0)
  {
      while(x==0)
      {
          x=sum;
          sum=0;
      }
      n = x%10;
      x=x/10;
      sum =sum+n;
  }
  if(sum==1)
    return 1;
  else
    return 0;
}