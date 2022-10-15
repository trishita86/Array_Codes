#include<stdio.h>
void main()
{
	int a[100],n,i,j,k;
	printf("\n enter the range:\n");
	scanf("%d",&n);
	printf("\n enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	printf("\n sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
