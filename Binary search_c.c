//code using forloop
#include<stdio.h>
int main()
{
	int a[100],n,key,low,high,mid,i;
	printf("enter the range:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched:\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			printf("element %d found at position at=%d\n",key,mid);
			break;
		}
		else if(a[mid]<key)
		low=mid+1;
		else
		high=mid-1;
	}
	if(low>high)
	{
		printf("sorry! element not found\n");
	}
	else
	{
		printf("successful completion done of the program!\n");
	}
	return 0;
}
// code using function
/*#include<stdio.h>
void binary(int a[],int n,int key)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
			printf("element %d found at position=%d", key,mid);
			break;
		}
		else if(a[mid]<key)
		low=mid+1;
		else
		high=mid-1;
	}
	if(low>high)
	{
		printf("not found\n");
	}
}
int main()
{
	int a[100],n,key,take,i;
	printf("\n enter the range:\n");
	scanf("%d",&n);
	printf("\n enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the element to be searched:\n");
	scanf("%d",&key);
	binary(a,n,key);
}*/
//code using recursion
/*#include<stdio.h>
int binary(int a[],int low,int high,int key)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		{
		return mid;
		}
		else if(a[mid]<key)
		return(a,mid+1,high,key);
		else
		return(a,low,mid-1,key);
	}
	return -1;	
	}
	int main()
	{
		int a[]={1,2,3,4,5};
		int n=5;
		int key=3;
		int found=binary(a,0,n-1,key);
		if(found==-1)
		printf("\n not found:\n");
		else
		printf("element %d found at position=%d\n",key,found);
		return 0;
	}*/
/*#include <stdio.h>
int iterativeBinarySearch(int array[], int start_index, int end_index, int element){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == element)
      {
      	 return middle;
         break;
	  }
      if (array[middle] < element)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 45;
   int found_index = iterativeBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}*/

