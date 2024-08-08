#include<stdio.h>
#include<conio.h>
//Q1
float area_of_circle(int r)
{
    return 3.14*r*r;
}
//Q2
float simple_Interest(int p,int r,int t)
{
    return p*r*t/100.0;
}
//Q3
int even_odd(int n)
{
    if(n%2)
        return 0;
    return 1;
}
//Q4
void printNatural(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
//Q5
void printOdd(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i*2-1);
}
//Q6
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}
//Q7
int combi(int n,int r)
{
    return factorial(n)/factorial(n-r)/factorial(r);
}
//Q8
int LCM(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
            return L;
}
//Q9
int HCF(int a,int b)
{
    int H;
    for(H=a>b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            return H;
}
//Q10
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
//Q11
int nextprime(int n)
{
    while(!prime(++n));
        return n;
}
//Q12
void Nprimes(int n)
{
    int k=2;
    while(n)
    {
        if(prime(k))
        {
            printf("%d ",k);
            n--;
        }
        k++;
    }
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    Nprimes(a);
    return 0;
}