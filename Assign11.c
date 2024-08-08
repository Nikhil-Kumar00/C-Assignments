#include<stdio.h>
#include<conio.h>
//Q1
void naturalN(int n)
{
    if(n>1)
        naturalN(n-1);
    printf("%d\n",n);
}
//Q2
void reverseN(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        reverseN(n-1);
    }
}
//Q3
void oddN(int n)
{
    if(n>1)
        oddN(n-1);
    printf("%d\n",n*2-1);
}
//Q4
void reverseoddN(int n)
{
    if(n>0)
    {
        printf("%d\n",n*2-1);
        reverseoddN(n-1);
    }
}
//Q5
void prnitEven(int n)
{
    if(n>1)
        prnitEven(n-1);
    printf("%d\n",n*2);
}
//Q6
void reverseEven(int n)
{
    if(n>0)
    {
        printf("%d\n",n*2);
        reverseEven(n-1);
    }
}
//Q7
void squares(int n)
{
    if(n>1)
        squares(n-1);
    printf("%d\n",n*n);
}
//Q8
int sumN(int n)
{
    if(n>1)
        return n+sumN(n-1);
}
//Q9
int sumOdd(int n)
{
    if(n>0)
        return n*2-1+sumOdd(n-1);
}
//Q10
int sumEven(int n)
{
    if(n>0)
        return n*2+sumEven(n-1);
}
//Q11
int sumSquares(int n)
{
    if(n>0)
        return n*n+sumSquares(n-1);
}
//Q12
int sumDigits(int n)
{
    if(n>0)
        return n%10+sumDigits(n/10);
}
//Q13
int factorial(int n)
{
    if(n>1)
        return n*factorial(n-1);
}
int main()
{
    int a,r;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Factorial is:%d",r=factorial(a));
    return 0;
}