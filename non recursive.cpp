#include<stdio.h>
void lsearch(int a[],int n,int key);
int main()
{
	int a[10],i,key,n,l;
	printf("Enter no.of elements\n");
	scanf("%d,&n");
	printf("Enter elements in to an array\n");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter key to search\n");
	scanf("%d",&key);
	lsearch(a,n,key);
	return 0;
	void lsearch(int a[],int n,int key);
	{
		int i,flag=0;
		for(i=0 ; i<n;i++)
		{
			if (a[i]==key)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("element found at location%d\n,i+1");
		else
		printf("element not found\n");
	
	}
}
