#include<stdio.h>
#include<conio.h>
#include<string.h>
//Q1
/*int main()
{
    char str[50];
    int i,c=0;
    printf("Enter a string:");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    printf("Length is:%d",--i);
    return 0;
}*/
//Q1 Diff logic:
/*int main()
{
    char str[50];
    int l;
    printf("Enter a string:");
    fgets(str,50,stdin);
    l=strlen(str);
    printf("Length is:%d",--l);
    return 0;
}*/
//Q1 Diff logic:
/*int main()
{
    char str[50]="Hello";
    int i,c=0;
    for(i=0;str[i];i++)
        c++;
    printf("Length is:%d",c);
    return 0;
}*/
//Q2
/*int main()
{
    char str[10],c;
    int count=0;
    printf("Enter a string and a character:\n");
    gets(str);
    c=getchar();
    for(int i=0;str[i];i++)
        if(str[i]==c)
            count++;
    printf("Occurance is:%d",count);
    return 0;
}*/
//Q3
/*int main()
{
    char str[50];
    int vov=0;
    printf("Enter a string:");
    gets(str);
    for(int i=0;str[i];i++)
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            vov++;
    printf("Total vowels:%d\n",vov);
    return 0;
}*/
//Q3 Vowels & consonats:
/*int main()
{
    char str[50];
    int vov=0,con=0;
    printf("Enter a string:");
    gets(str);
    for(int i=0;str[i];i++)
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            vov++;
        else 
            con++;
    printf("Total vowels:%d\n",vov);
    printf("Total consonats:%d\n",con);
    return 0;
}*/
//Q4
/*int main()
{
    char str[50];
    printf("Enter a string:");
    gets(str);
    printf("%s",strupr(str));
    return 0;
}*/
//Q5
/*int main()
{
    char str[50];
    printf("Enter a string:");
    gets(str);
    printf("%s",strlwr(str));
    return 0;
}*/
//Q6
/*int main()
{
    char str[50];
    printf("Enter a string:");
    gets(str);
    printf("%s",strrev(str));
    return 0;
}*/
//Q7
/*int String_length(char s[])
{
    int i;
    for(i=0;s[i];i++);
    return i;
}
int main()
{
    char str[50];
    int r;
    printf("Enter the string:");
    gets(str);
    r=String_length(str);
    printf("Length is:%d",r);
    return 0;
}*/
//Q8
/*void Reverse_string(char s[])
{
    printf("%s",strrev(s));
}
int main()
{
    char str[50];
    printf("Enter a string:");
    gets(str);
    Reverse_string(str);
    return 0;
}*/
//Q9
/*void compareString(char s1[],char s2[])
{
    if(strcmp(s1,s2))
        printf("Strnig are not equal:");
    else 
        printf("Strings are equal:");
}
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter 1st string:");
    gets(str1);
    printf("Enter 2nd string:");
    gets(str2);
    compareString(str1,str2);
    return 0;
}*/
//Q10
/*int main()
{
    char city[10][10],s[10];
    int i,r;
    printf("Enter the 10 city names:\n");
    for(i=0;i<=9;i++)
        gets(city[i]);
    for(r=1;r<=9;r++)
        for(i=0;i<=9-r;i++)
        {
            if(1==strcmp(city[i],city[i+1]))
            {
                strcpy(s,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],s);
            }
        }
    printf("Strings in dictionary order:\n");
    for(i=0;i<=9;i++)
        puts(city[i]);
    return 0;
}*/
//Q11 Reverse a string without using strrev fun:
int main()
{
    char str[20];
    int i,l=0;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i];i++)
        l++;
    for(i=0;i<l/2;i++)
        if(str[i]!=str[l-1-i])
        {
            printf("Not-Palindrome:\n");
            break;
        }
        if(i==l/2)
            printf("Palindrome:\n");
    return 0;
}