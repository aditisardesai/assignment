#include<stdio.h>
void read(int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void exchange(int n,int a[],int b[])
{
    int i,temp;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}
void display(int n, int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int n,a[100],b[100];
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter array 1 elements:\n");
    read(n,a);
    printf("Enter array 2 elements:\n");
    read(n,b);
    exchange(n,a,b);
    printf("Array 1:\n");
    display(n,a);
    printf("\nArray 2:\n");
    display(n,b);
}
