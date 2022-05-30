#include<stdio.h>
void read(int n,int a[])
{
    int i;
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void perfect(int n,int a[])
{
    int i,j,r,sum;
    printf("Perfect numbers are:\n");
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=1;j<a[i];j++)
        {
            r=a[i]%j;
            if(r==0)
                sum+=j;
        }
        if(a[i]==sum)
            printf("%d\t",a[i]);
    }
}
void main()
{
    int n,a[100];
    printf("Enter the size:");
    scanf("%d",&n);
    read(n,a);
    perfect(n,a);
}
