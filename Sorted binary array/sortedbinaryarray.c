#include <stdio.h>


int main()
{
    int n,i,f,l;
    printf("Enter the limit of the array:")
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int arr[n];
    f=0,l=n-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            arr[f]=a[i];
            f++;
        }
        if(a[i]==1)
        {
            arr[l]=a[i];
            l--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}