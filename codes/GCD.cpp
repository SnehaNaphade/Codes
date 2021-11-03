//C++ program to calculate GCD of 2 numbers

#include<iostream>
using namespace  std;

int main()
{
    int num1,num2,gcd;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD= "<<gcd;
    return 0;

}

