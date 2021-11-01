#include<stdio.h>
int main()
{
    int n,i;
    long factorial=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is:%d",n,factorial);

    return 0;
}
