#include<stdio.h>
void read(int a[])
{
    int i;
    printf("Enter the expenditure:\n");
    for(i=1;i<=12;i++)
    {
        scanf("%d",&a[i]);
    }
}
void exp(int a[])
{
    int i,sum=0,avg,j=0,m;
    int max=a[1],min=a[1];
    for(i=1;i<=12;i++)
    {
        sum+=a[i];
    }
    avg=(float)(sum/12);
    for(i=1;i<=12;i++)
    {
        if(a[i]>max)
        {
             max=a[i];
             j=i;
        }

    }
    for(i=1;i<=12;i++)
    {
        if(a[i]<min)
        {
             min=a[i];
             m=i;
        }

    }
    printf("\nMonths with expenditure more than 35000\n");
    for(i=1;i<=12;i++)
    {
        if(a[i]>35000)
            printf("%d\t",i);
    }
    printf("\nAverage expenditure = %d\n",avg);
    printf("Maximum expenditure : %d\n",j);
    printf("Minimum expenditure : %d\n",m);
}
void main()
{
    int a[100];
    read(a);
    exp(a);
}
