#include<stdio.h>
int main()
{
	int a,b;
	int arr[10];
	int n=10;
	int i,j,min_index=0;
	int temp = 0; 
	printf("enter the arr[size]:\a");
	scanf("%d",&a);
	printf("enter the elements in arr:\b");
	scanf(" %d ",b);
	for(i=0;i<n-1;i++)
	min_index = i;
	for(j=i+1;j=n;j++)
	{
		if(arr[j]<arr[i])
		min_index = j;
	}
	temp = i;
	i = j;
	temp = j;
	{
		printf("the sorted arr:");
		scanf("%d",&j);
	}
}
