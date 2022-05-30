#include<stdio.h>
void read(int n,int a[])
{
    int i;
    printf("Enter the %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void prime(int n,int a[])
{
    int i,j,p;
    printf("\nPrime numbers are:\n ");
    for(i=0;i<n;i++)
    {
        j=2;
        p=1;
        while(j<a[i])
        {
            if(a[i]%j==0)
            {
                p=0;
                break;
            }
            j++;
        }
        if(p==1)
        {
            printf("%d\t",a[i]);
        }
    }
}
void main()
{
    int n,a[100];
    printf("Enter the range:\n");
    scanf("%d",&n);
    read(n,a);
    prime(n,a);
}
