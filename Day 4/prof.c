#include <stdio.h>

int main() {
    int i,n,k,count,t,a;
    scanf("%d",&t);
    while(t--)
        {
        count=0;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
            {
           scanf("%d",&a);
            if(a<=0) count++;
        }
        if(count>=k) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}