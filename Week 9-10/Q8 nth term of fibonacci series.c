#include<stdio.h>
int fib(int n)
{
   if(n==1||n==2)
        return 1;
   else
    return(fib(n-2)+fib(n-1));
}
int main()
{
    int n,f;
    printf("Enter the number=");
    scanf("%d",&n);
    f=fib(n);
    printf("The %dth term of fibonacci series=%d",n,f);
}
