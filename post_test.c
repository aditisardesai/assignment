#include<stdio.h>
void read(int n,int a[])
{
    int i;
    printf("Enter the marks:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void score(int n, int a[])
{
    int i,even=0,odd=0;
    int full=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("\nNumber of students who scored even marks are %d\n",even);
    printf("Number of students who scored odd marks are %d\n",odd);
     for(i=0;i<n;i++)
     {
         if(a[i]==10)
         {
              full++;
              printf("Student %d has scored full marks\n",i+1);
         }

     }
     printf("\nNumber of students who scored full marks are %d\n",full);
}
void main()
{
    int n,a[100];
    printf("Enter number of students:\n");
    scanf("%d",&n);
    read(n,a);
    score(n,a);
}

