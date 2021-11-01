#include<stdio.h>
int main()
{
    int n,flag=0,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
           flag=1;
    }
    if(flag==1)
        printf("no is not prime.");
    else
        printf("no is  prime");

    return 0;
}
