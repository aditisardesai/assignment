#include<stdio.h>
void read(int n,int a[])
{
    int i;
    printf("Enter the number of days of %d students:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void penalty(int n,int a[])
{
    int i,p[100],avg,sum=0;
    for(i=0;i<n;i++)
    {
        p[i]=(2*a[i]);
        sum+=p[i];
        printf("%d\t",p[i]);
    }
    avg=(float)(sum/n);
    printf("\nTotal penalty = %d\n",sum);
    printf("Average penalty = %d\n",avg);
    int max=p[0],min=p[0];
    for(i=0;i<n;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(p[i]<min)
        {
            min=p[i];
        }
    }
    printf("The minimum penalty=%d\n",min);
    printf("The maximum penalty=%d\n",max);
}
void main()
{
    int n,a[100];
    printf("Enter number of students: ");
    scanf("%d",&n);
    read(n,a);
    penalty(n,a);
}

