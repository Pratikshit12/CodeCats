#include<stdio.h>
int cube(int n)
{
    if(n==0)
        return 0;
    else
        return (n*n*n)+cube(n-1);
}

int main()
{
    int n,f;
    printf("Enter the natural number=");
    scanf("%d",&n);
    f=cube(n);
    printf("Sum of cubes of first %d natural numbers=%d",n,f);
}
