#include<stdio.h>
#include<conio.h>
//Q1 Size of DT:
/*int main()
{
    printf("Size of int is:%d\n",sizeof(int));
    printf("Size of char is:%d\n",sizeof(char));
    printf("Size of float is:%d\n",sizeof(float));
    printf("Size of double is:%d\n",sizeof(double));
    printf("Size of void is:%d\n",sizeof(void));
    printf("Size of short int is:%d\n",sizeof(short int));
    printf("Size of long int is:%d\n",sizeof(long int));
    return 0;
}*/
//Q2 find first digit.
/*int main()
{
    int num;
    printf("Enter a 3 digit number:");
    scanf("%d",&num);
    printf("first digit of a given number is:%d",num/100);
    return 0;
}*/
//Q3 find middle digit.
/*int main()
{
    int num;
    printf("Enter a 3 digit number:");
    scanf("%d",&num);
    printf("Middle digit of a given number:%d",num/10%10);
    return 0;
}*/
//Q4 find last Digit.
/*int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Last digit of a given number is:%d",num%10);
    return 0;
}*/
//Q5 Swapping values:
/*int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\nA:=%d\nB:=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping:\nA:=%d\nB:=%d",a,b);
    return 0;
}*/
//Q6 Swapping values without 3rd variable:
/*int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\nA:=%d\nB:=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping:\nA:=%d\nB:=%d",a,b);
    return 0;
}*/
//Q7 Make last digit zero of a given num.
/*int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Given number is:%d",num);
    printf("Result is:%d",num/10*10);
    return 0;
}*/
//Q8 Append a digit in a given num.
/*int main()
{
    int num,n;
    printf("Enter a number and 1 digit:");
    scanf("%d %d",&num,&n);
    printf("Before append:%d",num);
    printf("After append :%d",num*10+n);
    return 0;
}*/
//Q9 Rotate a number by one position:
int main()
{
    int num,r;
    printf("Enter a number:");
    scanf("%d",&num);
    r=num%10*100+num/10;
    printf("Rotated digit:%d",r);
    return 0;
}