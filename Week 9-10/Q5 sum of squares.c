#include<stdio.h>
long square(int n)
{
    if(n==0)
        return 0;
    else
        return ((n*n)+square(n-1));
}
int main()
{
    int n,f;
    printf("Enter the natural number=");
    scanf("%d",&n);
    f=square(n);
    printf("Sum of squares of first %d natural numbers=%d",n,f);
}
