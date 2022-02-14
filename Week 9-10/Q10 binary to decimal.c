#include<stdio.h>
int dtob(int n)
{
    if(n==0)
        return;
    else
        dtob(n/2);
    printf("%d",n%2);
}
int main()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    dtob(n);
}
