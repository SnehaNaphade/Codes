//c program to find n th term of fibonacci series

#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter the number to find nth number of fibonacci series: ");
    scanf("%d",&n);
    
    printf("%d th term of fibonacci series is %d",n,fib(n));
    return 0;

}
int fib(int n)
{
    if (n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);
}