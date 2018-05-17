#include<stdio.h>
struct abc
{
int roll;
int marks[3];
char name[10],branch[10];
};
int main()
{
struct abc a;
int i;
printf("enter the name ");
gets(a.name);
printf("\nEnter branch ");
gets(a.branch);
printf("\nEnter roll ");
scanf("%d",&a.roll);

printf("\nEnter marks of three subjects ");
scanf("%d%d%d",&a.marks[0],&a.marks[1],&a.marks[2]);
printf("\n\n");
printf("name=%s",a.name);
printf("\nroll=%d",a.roll);
printf("\nbranch=%s",a.branch);
printf("\nMarks of 3 subjects ");
for(i=0;i<3;i++)
{printf("\n%d",a.marks[i]);}
}

