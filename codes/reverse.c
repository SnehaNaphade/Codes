//c program to reverse the number

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,remainder,result=0;

    printf("Enter the number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        remainder=num%10;
        result=result*10+remainder;
        num/=10;
    }
    printf("Reverse number= %d",result);

}