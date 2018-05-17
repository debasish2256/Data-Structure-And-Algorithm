#include<stdio.h>
struct abc
{
float b,gp;
char g,name[10],desig[10],dept[10];
};
int main()
{
struct abc a[100];
int n,i;
printf("Enter number of employees\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the name ");
gets(a[i].name);
printf("\nEnter designation ");
gets(a[i].desig);
printf("\nEnter department ");
gets(a[i].dept);
printf("\nEnter gender ");
scanf("%s",&a[i].g);
printf("\nEnter basic pay ");
scanf("%f",&a[i].b);
a[i].gp=a[i].b+((25/100)*a[i].b)+((75/100)*a[i].b);
printf("\ngross pay=%f",a[i].gp);
}
}


