//c program to find n th term of fibonacci series using recursive function

#include<stdio.h>
int fib(int num);
int main()
{
    int num;
    printf("Enter the number to find nth number of fibonacci series: ");
    scanf("%d",&num);
    
    printf("%d th term of fibonacci series is %d",num,fib(num));
    return 0;

}
int fib(int num)
{
    if (num==0)
    return 0;
    if(num==1)
    return 1;
    else
    return fib(num-1)+fib(num-2);
}
