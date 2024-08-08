#include<stdio.h>
#include<conio.h>
#include<string.h>
//Q1
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
//Q2
void swapStrings(char *p,char *q)
{
    char *temp;
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
}
//Q3
void sort(int *ptr,int size)
{
    int r,i,temp;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                temp=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
            }
        }
    }
}
//Q4
/*int main()
{
    char str[]="Hello";
    char *p=str;
    int c=0,v=0;
    for(int i=0;str[i];i++)
        if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u')
            v++;
        else 
            c++;
    printf("Total vowels:%d\n",v);
    printf("Total constant:%d",c);
    return 0;
}*/
//Q5
/*int main()
{
    int arr[10],i,sum=0,*p=arr;
    printf("Enter elements in an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=9;i++)
        sum+=p[i];
    printf("Sum is:%d",sum);
    return 0;
}*/
//Q6
/*int main()
{
    int arr[10],r,i,temp,*p=arr;
    printf("Enter elements in an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    printf("Reversed Array:\n");
    for(i=9;i>=0;i--)
        printf("%d\n",p[i]);
    return 0;
}*/
//Q7
/*int main()
{
    char str[]="Hello",*p=str;
    int k,i;
    for(k=0;p[k];k++);
    for(i=k;i>=0;i--)
        printf("%c ",p[i]);
    return 0;
}*/
int main()
{
    char str1[]="Hii";
    char str2[]="Bye";
    swapStrings(str1,str2);
    printf("%s\n",str1);
    printf("%s",str2);
    return 0;
}