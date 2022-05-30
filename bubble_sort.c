#include<stdio.h>
void read(int n,int a[])
{
    int i;
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void sort(int n,int a[])
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        else
            continue;
        }

    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int n,a[100];
    printf("Enter size: ");
    scanf("%d",&n);
    read(n,a);
    sort(n,a);
}
