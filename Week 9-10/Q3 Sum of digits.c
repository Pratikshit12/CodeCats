#include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10+sum(n/10));

}
int main()
{
    int n,f;
    printf("Enter a number=");
    scanf("%d",&n);
    f=sum(n);
    printf("Sum of %d digits is=%d",n,f);
}
