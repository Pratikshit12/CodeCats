#include<stdio.h>
int GCD(int a,int b)
{
if(a==b)
    return(a);
if(a%b==0)
    return(b);
if(b%a==0)
    return(a);
if(a>b)
    return((GCD(a%b,b)));
else
    return((GCD(a,b%a)));
}

int main()
{
    int a,b,g;
    printf("Enter first number=");
    scanf("%d",&a);
    printf("Enter second number=");
    scanf("%d",&b);
    g=GCD(a,b);
    printf("The GCD of %d and %d =%d",a,b,g);

}
