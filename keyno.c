#include<stdio.h>
void read(int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int n,int a[])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void search(int n,int a[])
{
    int k,i,j,temp=0;
    printf("\nEnter key number: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            j=i;
            temp=1;
        }
    }
    if(temp==1)
    {
        printf("%d found at position %d",k,j+1);
    }
    else
        printf("\n%d not found",k);
}
void main()
{
    int n,a[100];
    printf("Enter the size:");
    scanf("%d",&n);
    read(n,a);
    display(n,a);
    search(n,a);
}
