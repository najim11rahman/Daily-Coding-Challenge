#include<stdio.h>

int main()
{
	int n,i,low,mid,high,a[1000000],t;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	low=mid=0;
	high=n-1;
	while(mid<=high){
		switch(a[mid]){
			case 0: t=a[mid]; a[mid]=a[low]; a[low]=t; low++; mid++; break;
			case 1: mid++; break;
			case 2: t=a[mid]; a[mid]=a[high]; a[high]=t; high--; break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}

	return 0;
}#include<stdio.h>

int main()
{
	int n,i,low,mid,high,a[1000000],t;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	low=mid=0;
	high=n-1;
	while(mid<=high){
		switch(a[mid]){
			case 0: t=a[mid]; a[mid]=a[low]; a[low]=t; low++; mid++; break;
			case 1: mid++; break;
			case 2: t=a[mid]; a[mid]=a[high]; a[high]=t; high--; break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d",a[i]);
	}

	return 0;
}