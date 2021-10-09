//c program to check if a number is palindrome

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int num,remainder,result=0,temp;

    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;

    while(num!=0)
    {
        remainder=num%10;
        result=result*10+remainder;
        num/=10;
    }
    if(temp==result)
    {
        printf("It is a palindrome number");
    }
    else
    {
        printf("It is not a palindrome number");

    }

}

