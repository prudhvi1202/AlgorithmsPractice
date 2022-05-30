#include<stdio.h>
void display(int a[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insertion_sort(int a[],int size)
{
	int i,j,key;
	for(j=1;j<size;j++)
	{
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]<key)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	display(a,size);
}

int main()
{
	int b[6]={3,2,4,12,4,1};
	insertion_sort(b,6);	
	return 0;
}
