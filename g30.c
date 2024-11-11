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
        remainder =n%10;
        sum+=remainder;
        n/=10;
    }
    printf("%d\n",sum);
    return 0;
}

