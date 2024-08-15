#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<string.h>
//Q1st way:
/*int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping A:=%d B:=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping A:=%d B:=%d",a,b);
    return 0;
}
*/
//Q2nd way:
/*int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping A:=%d B:=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping A:=%d B:=%d",a,b);
    return 0;
}*/
//Q3nd way:
/*int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping A:=%d B:=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping A:=%d B:=%d",a,b);
    return 0;
}*/
//Q4th way:
/*int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping A:=%d B:=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter swapping A:=%d B:=%d",a,b);
    return 0;
}*/
//Q5th way..:

//Another...

//Q1st way
/*int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%2==0)
        printf("Even:");
    else 
        printf("ODD:");
    return 0;
}*/
//Q2nd way
/*int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%2)
        printf("ODD");
    else 
        printf("Even:");
    return 0;
}*/
//Q3rd way
/*int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x&1)
        printf("ODD:");
    else
        printf("Even");
    return 0;
}*/
//Q4th way
/*int main()
{
    int x;
    printf("Enter a string:");
    scanf("%d",&x);
    if(x/2*2==x)
        printf("Even:");
    else 
        printf("ODD:");
    return 0;
}*/
//Q5 Add two numbers without using + operator:
/*int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a-(-b);
    printf("Sum is:%d",c);
    return 0;
}*/
//Q6
/*int main()
{
    int i,n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=sqrt(n);
    for(i=2;i<=s;i++)
        if(n%i==0)
            break;
    printf(i==s+1?"Prime:":"Not-Prime:");
    return 0;
}*/
/*void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}*/
/*int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    switch(marks)
    {
        case 91 ... 100:
            printf("A Grade:");
            break;
        case 81 ... 90:
            printf("B Grade:");
            break;
        case 71 ... 80:
            printf("C Grade:");
            break;
        case 61 ... 70:
            printf("D Grade");
            break;
        case 51 ... 60:
            printf("E Grade:");
            break;
        case 0 ... 50:
            printf("F Grade:");
            break;
        default:
            printf("Invalid Marks:");
    }
    return 0;
}*/
/*int main()
{
    int month;
    printf("Enter month number:");
    scanf("%d",&month);
    switch(month)
    {
        case 1||3||5||7||8||10||12:
            printf("31 Days:");
            break;
        case 2:
            printf("28 Days:");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days:");
            break;
        default:
            printf("Ivalid month:");
    }
    return 0;
}*/
/*int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}*/
/*int main()
{
    int i,a,b,power=1;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
        power=power*a;
    printf("Power is:%d",power);
    return 0;
}*/
/*void fibo()
{
    int a=-1,b=1,i,c,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}*/
/*void f(int n) Error
{
    int a=-1,b=1,c;
    if(n>1)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        f(n-1);
    }
}*/
/*int sumEle(int b[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
        sum=sum+b[i];
    return sum;
}*/
/*void rotate_Array(int b[],int size,int n)
{
    while(n--)
    {
        int i,temp;
        temp=b[size-1];
        for(i=size;i>0;i--)
            b[i]=b[i-1];
        b[0]=temp;
    }
}*/
/*void insertion_sort(int A[],int size)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<A[j])
                A[j+1]=A[j];
            else 
                break;
        }
        A[j+1]=temp;
    }
}*/
/*char* reverse(char s[])
{
    int i,l,temp;
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++)
    {
        temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;
    }
    return s;
}*/
/*char* upper(char s[])
{
    int i;
    for(i=0;s[i];i++)
        if(s[i]>'a' && s[i]<='z')
            s[i]-=32;
    return s; 
}*/
/*int vowels(char s[])
{
    int i,j,c=0;
    char v[]="aeiouAEIOU";
    for(i=0;s[i];i++)
        for(j=0;s[j];j++)
            if(s[i]==v[j])
            {
                c++;
                break;
            }
    return c;
}*/
/*int alphanumeric(char s[])
{
    int i,j;
    int alpha=0,digit=0;
    for(i=0;s[i];i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            digit=1;
        if(s[i]>='a'&&s[i]<'z')
            alpha=1;
    }
    if(digit&&alpha)
        return 1;
    return 0;
}*/
/*int main()
{
    char str[]="Hello";
    int i;
    for(i=0;str[i];i++)
        if(str[i]>96)
            str[i]-=32;
    printf("%s",str);
    return 0;
}*/
void sortStr(char city[][20],int size)
{
    char s[10];
    int i,r;
    for(r=1;r<size;r++)
        for(i=0;i<size-r;i++)
            if(1==strcmp(city[i],city[i+1]))
            {
                strcpy(s,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],s);
            }
}
int main()
{
    char str[10][20]={"Neha","Prince","Arvind","Praveen","Akash","Shubham","Seema","Meenu","Bala","Shashi"};
    sortStr(str,10);
    for(int i=0;i<=9;i++)
        puts(str[i]);
    return 0;
}