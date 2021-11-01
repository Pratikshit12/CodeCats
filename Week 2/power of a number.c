#include<stdio.h>
#include<math.h>
int main()
{
    int base,exponent,i;
    long int val=1;
   printf("Enter base:");
   scanf("%d",&base)  ;
   printf("Enter exponent:");
   scanf("%d",&exponent);

   for(i=1;i<=exponent;i++)
   {
    val=val*base;
    }
    printf("The value of %d to the power %d is:%ld",base,exponent,val);


    return 0;
}
