#include<stdio.h>
#include<conio.h>
//Q1
/*int main()
{
    int arr[10],i,sum=0;
    printf("Enter elements of an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=9;i++)
        sum=sum+arr[i];
    printf("Sum is:%d",sum);
    return 0;
}*/
//Q2
/*int main()
{
    int arr[10],i,sum=0;
    float avg;
    printf("Enter elements of an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=9;i++)
        sum=sum+arr[i];
    avg=sum/10.0;
    printf("Average is:%f",avg);
    return 0;
}*/
//Q3
/*int main()
{
    int arr[10],i,sumeven=0,sumodd=0;
    printf("Enter elements of an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=9;i++)
    {
        if(arr[i]%2)
            sumodd=sumodd+arr[i];
        else 
            sumeven=sumeven+arr[i];
    }
    printf("Sum Even is:%d\n",sumeven);
    printf("Sum odd is:%d\n",sumodd);
    return 0;
}*/
//Q4
/*int main()
{
    int arr[10],i,max;
    printf("Enter elements of an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    for(i=1;i<=9;i++)
        if(max<arr[i])
            max=arr[i];
    printf("Greatest value is:%d",max);
    return 0;
}*/
//Q5
/*int main()
{
    int arr[10],i,min;
    printf("Enter elements of an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    min=arr[0];
    for(i=1;i<=9;i++)
        if(min>arr[i])
            min=arr[i];
    printf("Smallest value is:%d",min);
    return 0;
}*/
//Q6
/*int main()
{
    int arr[10],i,r,temp;
    printf("Enter elements of an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    for(r=1;r<=10-1;r++)
    {
        for(i=0;i<=10-1-r;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    printf("Sorted Array:\n");
    for(i=0;i<=9;i++)
        printf("%d\n",arr[i]);        
    return 0;
}*/
//Q7
int greatest(int a[],int size)
{
    int i,max;
    max=a[0];
    for(i=1;i<size;i++)
        if(max<a[i])
            max=a[i];
    return max;
}
//Q8
int smallest(int a[],int size)
{
    int i,min;
    min=a[0];
    for(i=1;i<size;i++)
        if(min>a[i])
            min=a[i];
    return min;
}
//Q9
int sort(int a[],int size)
{
    int temp,r,i,k=0;
    for(r=1;r<=size-1;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                k=1;
            }
        }
    }
    return k;
}
//Q10
/*int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter elements for 1st matrix:\n");   //Input data in 1st matrix:
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements for 2nd matrix:\n");   //Input data in 2nd matrix:
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<=2;i++)   //Addition of 1st & 2nd matrix:
        for(j=0;j<=2;j++)
            c[i][j]=a[i][j]+b[i][j];

    printf("Sum of Matrices is:\n");   //Printing of sum matrix:
    for(i=0;i<=2;i++)   
    {
        for(j=0;j<=2;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}*/
//Q11
/*int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    printf("Enter elements for 1st matrix:\n");   //Input data in 1st matrix:
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter elements for 2nd matrix:\n");   //Input data in 2nd matrix:
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<=2;i++)   //Multiplication of 1st & 2nd matrices:
        for(j=0;j<=2;j++)
        {
            sum=0;
            for(k=0;k<=2;k++)
                sum+=a[i][k]*b[k][j];
            c[i][j]=sum;
        }

    printf("Multiplication of Matrices is:\n");   //Printing of multiplied array:
    for(i=0;i<=2;i++)   
    {
        for(j=0;j<=2;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}*/
//Q12
/*int main()
{
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    },//Declaration of 2D array:
    c[3][3],i,j;

    printf("Matrix is:\n");   //Before transpose:
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    for(i=0;i<=2;i++)   //Transpose of matrix:
        for(j=0;j<=2;j++)
            c[j][i]=a[i][j];
    
    printf("\nTransposed matrix is:\n");    //Print transposed matrix:
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}*/
int main()
{
    int arr[10],i;
    printf("Enter elements of an array:\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
    if(sort(arr,10))
    {
        printf("Sorted Array:\n");
        for(i=0;i<=9;i++)
            printf("%d\n",arr[i]);
    }
    else 
        printf("Array is already sorted:");
    return 0;
}