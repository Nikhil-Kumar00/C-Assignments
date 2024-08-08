#include<stdio.h>
#include<conio.h>
//Q1 Divisible 3 & 2:
/*int main()
{
    int x;
    printf("Enter a numbers:");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
        printf("Divisible:");
    else 
        printf("Not Divisible:");
    return 0;
}*/
//Q2 Divisible 7 or 3:
/*int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%7==0 || x%3==0)
        printf("Divisible:");
    else 
        printf("Not-Divisible:");
    return 0;
}*/
//Q3 Positive or Non-Positive:
/*int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>0)
        printf("Positive:");
    else 
        printf("Non-Positive:");
    return 0;
}*/
//Q4 Leay year:
/*int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0)
        printf("Leap year:");
    else 
        printf("Not-Leap year:");
    return 0;
}*/
//Q5 Greater among 3 num:
/*int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        if(a>c)
            printf("A is greater:");
        else
            printf("C is greater:");
    else 
        if(b>c)
            printf("B is greater:");
        else
            printf("C is greaetr:");
    return 0;
}*/
//Q5 Short
/*int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",a>b?a>c?a:c:b>c?b:c);
    return 0;
}*/
//Q6
/*int main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
        printf("Upper Character:");
    else if(x>='a' && x<='z')
        printf("Lower Character:");
    else if(x>='0' && x<='9')
        printf("Digit Character:");
    else 
        printf("Special Character:");
        return 0;
}*/
//Q7 Triangle is valid or not.
/*int main()
{
    int a,b,c;
    printf("Enter lenght of the sides of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
        printf("Valid:");
    else 
        printf("Invalid:");
    return 0;
}*/
//Q8
/*int main()
{
    int month;
    printf("Enter month number:");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("31 Days:");
    else if(month==4||month==6||month==9||month==11)
        printf("30 Days:");
    else if(month==2)
        printf("28 Days:");
    return 0;
}*/
//Q9
/*int main()
{
    int a,b,c,d;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Real and distinct roots:");
    else if(d==0)
        printf("Real and equal roots:");
    else 
        printf("Imaginary roots:");
    return 0;
}*/
//Q10
int main()
{
    int english,physics,chemistry,mathemathics,computer;
    float percentage;
    printf("Enter marks of the 5 subjects:\nEnglish,Physics,Chemistry,Mathematics,Computer:\n");
    scanf("%d %d %d %d %d",&english,&physics,&chemistry,&mathemathics,&computer);    
    percentage=(english+physics+chemistry+mathemathics+computer)/500.0*100;
    if(percentage>=90)
        printf("Grade A:");
    else if(percentage>=80)
        printf("Grade B:");
    else if(percentage>=70)
        printf("Grade C:");
    else if(percentage>=60)
        printf("Grade D:");
    else if(percentage>=40)
        printf("Grade E:");
    else 
        printf("Grade F:");
    return 0;
}