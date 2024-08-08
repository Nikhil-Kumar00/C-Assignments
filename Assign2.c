#include<stdio.h>
#include<conio.h>
#include<math.h>
//Q1 Sum of 2 num:
/*int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("Sum is:%d",c);
    return 0;
}*/
//Q2 Area of circle:
/*int main()
{
    int r;
    float area;
    printf("Enter the radious of the circle:");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of the circle is:%f",area);
    return 0;
}*/
//Q3 Volume of cuboid:
/*int main()
{
    int l,b,h,volume;
    printf("Enter the lenght width and height:");
    scanf("%d %d %d",&l,&b,&h);
    volume=l*b*h;
    printf("Volume of cuboid is:%d",volume);
    return 0;
}*/
//Q4 Simple Interrest:
/*int main()
{
    int principal,rate,time;
    float amt;
    printf("Enter the principal rate and time:");
    scanf("%d %d %d",&principal,&rate,&time);
    amt=principal*rate*time/100.0;
    printf("Simple Interest is:%f",amt);
    return 0;
}*/
//Q5 Area of the rectangle:
/*int main()
{
    int area,l,b;
    printf("Enter the length breadth:");
    scanf("%d %d",&l,&b);
    area=l*b;
    printf("Area of the rectangle:%d",area);
    return 0;
}*/
//Q6 Average of 3 num:
/*int main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("Average of three numbers is:%f",avg);
    return 0;
}*/
//Q7 Square of a num:
/*int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Square of a number is:%d",x*x);
    return 0;
}*/
//Q8 ASSCII of a charracter:
/*int main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    printf("ASCII of the character is:%d",c);
    return 0;
}*/
//Q9 Profit:
/*int main()
{
    int sp,cp,profit;
    printf("Enter the selling price and cost price:");
    scanf("%d %d",&sp,&cp);
    profit=sp-cp;
    printf("Profit is:%d",profit);
    return 0;
}*/
//Q10 Area of the triangle:
int main()
{
    int a,b,c;
    float s,area;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle:%f",area);
    return 0;
}