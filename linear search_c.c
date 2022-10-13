#include<stdio.h>
int main()
{
	int n,a[100],t,i,found=0;
	printf("enter the range:\n ");
	scanf("%d",&n);
	printf("enter the element to be searched:\n");
	scanf("%d",&t);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
for(i=0;i<n;i++)
{
	if(a[i]==t)
	{
	found=1;
	break;
}
}
if(found==1)
printf("element found at index=%d",i);
else
printf("not found");
return 0;
}

/*#include<stdio.h>
int main()
{
	int n,a[100],t,i;
	printf("enter the range:\n ");
	scanf("%d",&n);
	printf("enter the element to be searched:\n");
	scanf("%d",&t);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
for(i=0;i<n;i++)
{
	if(a[i]==t)
	{
	printf("found at position=%d",i+1);
	break;
}
}
if(i==n)
printf("not found");
return 0;
}*/

