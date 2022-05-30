#include<stdio.h>
void read(int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void count(int n,int a[])
{
    int p=0,neg=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            neg++;
        else if(a[i]>0)
            p++;
    }
    printf("\nfrequency of positive numbers is %d\n",p);
    printf("frequency of negative numbers is %d\n",neg);
}
void display(int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int n,a[100],p,neg;
    printf("Enter the size:");
    scanf("%d",&n);
    read(n,a);
    display(n,a);
    count(n,a);
}
