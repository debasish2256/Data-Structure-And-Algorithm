#include<stdio.h>
int main()
{
int a[100],n,i,ch,e,t;

printf("Enter the length of array ");
scanf("%d",&n);
printf("\nEnter array ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("1.insert element at beginning\n ");
printf("2.insert element at the end\n ");
printf("3.insert element at specified position\n ");
printf("4.delete element at beginning\n ");
printf("5.delete element at the end\n ");
printf("6.delete element at specified postion\n ");
printf("Enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("Enter the element\n");
	scanf("%d",&e);
	for(i=n;i<=0;i++)
	{
		if(i==0)
		a[0]=e;
		else
		a[i]=a[i+1];
	}
	break;
case 2:
	printf("Enter the element\n");
	scanf("%d",&e);
	for(i=n;i<=0;i++)
	{
		if(i==n)
		a[n]=e;
		else
		a[i]=a[i+1];
	}
case 3:
	printf("Enter position\n");
	scanf("%d",&e);
	printf("Enter the element ");
case 5:
	a[0]=0;
	printf("Number deleted %d",a[0]);
	break;
case 4:
	for(i=0;i<n-1;i++)
	{
	a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
		printf("\n%d",a[i]);
	break;
case 6:
	printf("Enter position\n");
	scanf("%d",&e);
	if(e>
	break;
default:
	printf("Wrong choice");
}
}
