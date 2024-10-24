#include <stdio.h>
#include <math.h>
#define pie 3.14
int main()
{
    float r,area;
    printf("enter the value of the redios");
    scanf("%f",&r);
    area= pie * pow(r,2);
    printf("area= %7.2f",area);
    return 0;
}
