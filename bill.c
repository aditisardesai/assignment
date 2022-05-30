#include<stdio.h>
void read(int n,int a[])
{
    int i;
    printf("Enter the units consumed:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void bill(int n,int a[])
{
    int i;
    float bill=0;
    printf("The electricity bill is:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]>0&&a[i]<=100)
        {
            bill=1.5*a[i];
        }
        else if(a[i]>=101&&a[i]<=250)
            bill=1.5*100+2.3*(a[i]-100);
        else if(a[i]>=251&&a[i]<=600)
            bill=1.5*100+2.3*150+4.0*(a[i]-250);
        else if(a[i]>600)
            bill=bill=1.5*100+2.3*150+4.0*350+5.5*(a[i]-600);
        printf("%0.2f\t",bill);
    }
}
void main()
{
    int n,a[100];
    printf("Enter number of flats: ");
    scanf("%d",&n);
    read(n,a);
    bill(n,a);
}
