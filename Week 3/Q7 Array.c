#include<stdio.h>
int main()
{
    int a[20],n,min,max,i;
    printf("\n Enter number of elements in array:");
    scanf("%d",&n);
    printf("\n Enter elements of array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\n Elements of array:");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    min=max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("\n Largest number of array:%d",max);
    printf("\n Smallest number of array:%d",min);
    return 0;
}
