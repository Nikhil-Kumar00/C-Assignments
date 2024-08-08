#include<stdio.h>
#include<conio.h>
//Q1
/*int main()
{
    int a=-1,b=1,c,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}*/
//Q2
/*int main()
{
    int  H,a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    printf("HCF is:%d",H);
    return 0;
}*/
//Q3 a>
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=5-i)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3 b>
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3 c>
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3 d>
/*int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=4;j++)
        {
            if(j<=5-i)
                printf("%c",k++);
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3 e>
/*int main()
{
    int i,j;
    char k; 
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3 f> E
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j==i || j==8-i)
                    printf("1");
                else 
                    printf("0");
            }
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3 G
/*int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        i<=3?k++:k--;
        for(j=1;j<=5;j++)
        {
            if(j>=4-k && j<=2+k)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3 H>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=6-i;
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("%d",k--);
            else 
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}