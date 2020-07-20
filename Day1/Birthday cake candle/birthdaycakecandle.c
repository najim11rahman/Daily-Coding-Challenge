#include <stdio.h>

int main()
{
    int n,count,i,h[100000],lar;
    scanf("%d",&n);
    lar=0;
    count=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
        if(lar==h[i])
        {
            count++;
        }
        if(h[i]>lar)
        {
            lar=h[i];
        }
    }
    
    printf("%d",count);
    return 0;
}