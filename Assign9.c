#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Q1
/*int main()
{
    int month;
    printf("Enter month number:");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("31 Days:");
            break;
        case 2:
            printf("28 Days:");
            break;
        case 3:
            printf("31 Days:");
            break;            
        case 4:
            printf("30 Days:");
            break;
        case 5:
            printf("31 Days:");
            break;
        case 6:
            printf("30 Days:");
            break;
        case 7:
            printf("31 Days:");
            break;
        case 8:
            printf("31 Days:");
            break;
        case 9:
            printf("30 Days:");
            break;
        case 10:
            printf("31 Days:");
            break;
        case 11:
            printf("30 Days:");
            break;
        case 12:
            printf("31 Days:");
            break;
        default:
            printf("Ivalid month:");
    }
    return 0;
}*/
//Q2
/*int main()
{
    int a,b,c,n;
    while(1)
    {
        printf("\n*OPTIONS*\n");
        printf("1.Addition:\n");
        printf("2.Subtraction:\n");
        printf("3.Multiplication:\n");
        printf("4.Diviion:\n");
        printf("5.Exit:\n");
        printf("Please select any option:\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                c=a+b;
                printf("Sum is:%d\n",c);
                break;
            case 2:
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                c=a-b;
                printf("Subtraction is:%d\n",c);
                break;
            case 3:
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                c=a*b;
                printf("Multiplication is:%d\n",c);
                break;
            case 4:
                printf("Enter two numbers:");
                scanf("%d %d",&a,&b);
                c=a/b;
                printf("Division is:%d\n",c);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Option:");
        }
    }
    return 0;
}*/
//Q3
int main()
{
    int day;
    printf("Enter a number:");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("Good Morning!");
            break;
        case 2:
            printf("Have a good day!");
            break;
        case 3:
            printf("Have a safe journey!");
            break;
        case 4:
            printf("God bless you!");
            break;
        case 5:
            printf("How are you buddy!");
            break;
        case 6:
            printf("Nice to meet you!");
            break;
        case 7:
            printf("Nice to talk to you!");
            break;
        case 8:
            printf("Good Evening!");
            break;
        default:
            printf("Ivalid number:");
    }
    return 0;
}