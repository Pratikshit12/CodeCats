#include<stdio.h>
int pow(int x,int n)
{
    if(n==0)
        return 1;
    else
       return  x*pow(x,n-1);
}

int main()
{
    int x,n,p;
    printf("Enter the base number=");
    scanf("%d",&x);
    printf("Enter the number of time base is multipled=");
    scanf("%d",&n);
    p=pow(x,n);
    printf("power of %d^%d is %d",x,n,p);

}
