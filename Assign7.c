#include<stdio.h>
#include<conio.h>
//Q1
/*int main()
{
    int n,sum=0,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    }while(--n);
    printf("Sum is:%d",sum);
    return 0;
}*/
//Q2
/*int main()
{
    int n,sum=0,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i*2;
        i++;
    }while(--n);
    printf("Sum is:%d",sum);
    return 0;
}*/
//Q3
/*int main()
{
    int n,sum=0,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i*2-1;
        i++;
    }while(--n);
    printf("Sum is:%d",sum);
    return 0;
}*/
//Q4
/*int main()
{
    int n,sum=0,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i*i;
        i++;
    }while(--n);
    printf("Sum is:%d",sum);
    return 0;
}*/
//Q5
/*int main()
{
    int n,sum=0,i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i*i*i;
        i++;
    }while(--n);
    printf("Sum is:%d",sum);
    return 0;
}*/
//Q6
/*int main()
{
    int n,i=1,f=1;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        f=f*i;
        i++;
    }while(--n);
    printf("Factorial si:%d",f);
    return 0;
}*/
//Q7
/*int main()
{
    int n,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        c++;
        n/=10;
    }while(n);
    printf("Total digit is:%d",c);
    return 0;
}*/
//Q8
/*int main()
{
    int n,i=2;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
            break;
        i++;
    }while(i<n);
    if(n==i)
        printf("Prime");
    else 
        printf("Not-Prime:");
}*/
//Q9
/*int main()
{
    int L,a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    L=a>b?a:b;
    do
    {
        if(L%a==0&&L%b==0)
            break;
        L++;
    }while(L<=a*b);
    printf("LCM is:%d",L);
    return 0;
}*/
//Q10
int main()
{
    int n,temp=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do
    {
        temp=temp*10+n%10;
    }while(n/=10);
    printf("Reverse num is:%d",temp);
    return 0;
}