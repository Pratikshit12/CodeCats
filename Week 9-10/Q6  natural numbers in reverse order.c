#include<stdio.h>
int reverse(int n)
{
    if(n>0)
    printf("%d ",n);
    reverse(n-1);


}
int main()
{
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    reverse(n);

}
