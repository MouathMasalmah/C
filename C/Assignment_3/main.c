//Mouath_Sami_Masalmah,Section_6,1220179,Wahbeh_Mousa.
#include <stdio.h>
#include <stdlib.h>

int within_x_percent(double ,double ,double );
int main()
{
    double x=0.05,y;//x=perecent,y=data.
    int r1=100,r2=357,r3=1187,r4=2193,r5=2660;
    printf("Please enter the boiling point of your substance?\n");
    scanf("%lf",&y);

    if(within_x_percent(r1,y,x)==1)
    {
        printf("Water");
    }
    else if(within_x_percent(r2,y,x)==1)
    {
        printf("Mercury");
    }
    else if(within_x_percent(r3,y,x)==1)
    {
        printf("Copper");
    }
    else if(within_x_percent(r4,y,x)==1)
    {
        printf("Silver");
    }
    else if(within_x_percent(r5,y,x)==1)
    {
        printf("Gold");
    }
    else
        printf("unknown substance");
    return 0;
}

int within_x_percent(double ref,double y,double x)
{
    if(y>=ref-(ref*x) && y<=ref+(ref*x))
        return 1;
    else
        return 0;
}
