#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Input value of terms:");
scanf("%d",&n);
printf("\n the first %d natural numbers are:\n",n);
i=1;
while(i<=n)
{
   printf("%d",i);
    sum+=i;
    i++;
    }

printf("\n The sum of %d natural numbers is:%d\n",n,sum);
return 0;
}
