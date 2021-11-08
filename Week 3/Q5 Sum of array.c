#include<stdio.h>
int main()
{
    int n,i,a[20],sum=0,evenSum=0,oddSum=0;
    printf("\n Enter number of elements in array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n Elements of array are:");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);

    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\n Sum of elements in array is:%d",sum);
    return 0;
}
