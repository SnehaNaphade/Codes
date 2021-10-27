#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a,b,c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("Largest Number is %.2lf",a);
    }

    if(b>a && b>c)
    {
        printf("Largest Number is %.2lf",b);
    }

    if(c>b && c>a)
    {
        printf("Largest Number is %.2lf",c);
    }
    return 0;
}
