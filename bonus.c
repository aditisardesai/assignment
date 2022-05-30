#include<stdio.h>
#include<math.h>
void read(int n,int a[])
{
    int i;
    printf("Enter experience of %d employees\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void salary(int n,int a[])
{
    int i,s;
    for(i=0;i<n;i++)
    {
        if(a[i]>=5&&a[i]<=7)
        {
            s=(10600+(10600*0.1));
        }
        else if(a[i]>=8&&a[i]<=10)
        {
            s=(21300+(21300*0.1));
        }
        else if(a[i]>10)
        {
            s=(32100+(32100*0.1));
        }
        else
            s=0;
        printf("%d\t",s);
    }
}
void main()
{
    int n,s,a[100],i;
    printf("Enter number of employees: ");
    scanf("%d",&n);
    read(n,a);
    printf("Salaries are:\n");
    salary(n,a);
}
