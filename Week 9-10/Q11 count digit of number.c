#include<stdio.h>
int count(int n)
{
   static  int c=0;
 if(n>0)
 {
     c++;
     count(n/10);
 }
 return c;

}
int main()
{
    int n,c;
    printf("Enter a number=");
    scanf("%d",&n);
    c=count(n);
    printf("The number of digit in %d is %d",n,c);
}
