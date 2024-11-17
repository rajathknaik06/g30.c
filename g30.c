/*Savira loves playing with numbers. She came across an interesting problem that involves finding the sum of the digits of a given number. Can you help her solve it?



Write a program to take an integer as input and calculate the sum of its digits.

Input format :
The input consists of an integer n.

Output format :
The output displays an integer, representing the sum of the digits of the given integer.*/

// You are using GCC
#include<stdio.h>
int main()
{
    int n,sum =0,remainder;
    
    scanf("%d",&n);
    
    while(n!=0)
    
    {
        remainder =n%10;      //The last digit of n is obtained using n % 10 and stored in remainder.
        sum+=remainder;      //The remainder is added to sum.
        n/=10;                //The number n is reduced by one digit by performing integer division n /= 10.
    }
    printf("%d\n",sum);
    return 0;
}

