#include<stdio.h>
  int sum(int n)
  {
      if(n>0)
        return(n+sum(n-1));
      else
        return(0);


}
int main()
{
    int n,f;
    printf("Number of natural numbers=");
    scanf("%d",&n);
    f=sum(n);
    printf("Sum of %d natural numbers are=%d",n,f);

}
