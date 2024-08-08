#include<stdio.h>
#include<conio.h>
//Q1
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q2
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q3
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q4
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q5
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q6
/*int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
                printf("*",k=0);
            else
                printf(" ",k=1);
        }
        printf("\n");
    }
    return 0;
}*/
//Q6 Another way:
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("* ");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q7
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=6-i || j>=4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q8
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
//Q9
/*int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}*/
//Q10 G
/*int main()
{
    int i,j,k=0;
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=7;j++)
        {
            if(j>=5-k && j<=3+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q11 G
/*int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            if(j<=k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q12
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q13
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=i;
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
//Q14
/*int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k=7-i;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
                printf("%d",k--);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q15
/*int main()
{
    int i,j,k,l;
    for(i=1;i<=9;i++)
    {
        l=1;
        i<=5?k++:k--;
        for(j=1;j<=5;j++)
        {
            if(j>=6-k)
                printf("%d",l++);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q16
/*int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j==i || j==8-i)
            {
                if(j==i)
                    printf("\\");
                else 
                    printf("/");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
//Q17
/*int main()
{
    int i,j,k;
    for(i=1;i<=9;i++)
    {
        i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
            if(j<=6-k || j>=4+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q18
/*int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
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
//Q19
/*int main()  
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';   
        for(j=1;j<=8;j++)
        {
            if(j>=5-i && j<=4+i)
            {
                if(j==5)
                    k='1';
                printf("%c",k++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q20
/*int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j>=5-i && j<=9-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q21
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=49;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(j==5)
                    k=65;
                printf("%c",k++);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q22 G
/*int main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        k=1;
        for(j=1;j<=6;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q23 E
/*int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        if(i==1 || i==7)
            k=7;
        else 
            k=1;
        for(j=1;j<=7;j++)
        {
            if(j==1||j==7||i==1&&j<=k||i==7&&j<=k)
                printf("*");
            else if(i>=3&&i<=5 && j>=3&&j<=5)
            {
                if(j==4&&i==4)
                    printf(" ");
                else
                    printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q24
/*int main()
{
    int i,j,k=1,n=11,m=0;
    for(i=1;i<=21;i++)
    {
        i<=n?m++:m--;
        k=m-1;
        for(j=1;j<=21;j++)
        {
            if(j>=n+1-m && j<=n-1+m)
                printf(" %d",j<n?k++%10:k--%10);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q25
/*int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k=64+i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%c",k--);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q26
/*int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k--:k++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q27 
/*int main()
{
    int i,j,k=64,l;
    for(i=1;i<=5;i++)
    {
        l=k=k+i;
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("%c",l--);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q28
/*int main()
{
    int i,j,k,l;
    for(i=1;i<=4;i++)
    {
        if(i%2)
            l=49;
        else 
            l=65;
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i && k)
            {
                printf("%c",l++);
                k=0;
            }
            else
                printf(" ",k=1);
        }
        printf("\n");
    }
    return 0;
}*/
//Q29
/*int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==i || j==6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}*/
//Q30
/*int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
               printf("%c",k);
            else
                printf(" ");
            k++;
        }
        printf("\n");
    }
    return 0;
}*/
//Q31
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=0;
        for(j=1;j<=6;j++)
        {
            if(j<=i)
            {
                printf("%d ",k);
                k=k+i-1;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}