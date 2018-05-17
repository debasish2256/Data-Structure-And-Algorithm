#include<stdio.h>
struct stack
{
int stk[10];
int top;
};
typedef struct stack ST;
ST s;

void push();
void pop();
void disp();
int check();

int main()
{
int ch,l=1;
s.top=-1;

while(l)
{
printf("1.check stack\n");
printf("2.push into stack\n");
printf("3.pop from stack\n");
printf("4.display stack\n");
printf("5.exit\n");
printf("Enter choice\n"); 
scanf("%d",&ch);
switch(ch)
{
case 1:if(check()==0)
		printf("Empty stack\n");
	else
		printf("Full stack\n");
	break;
case 2:push();
	break;
case 3:pop();
	break;
case 4:disp();
	break;
case 5:l=0;
	break;
default:
	printf("Wrong input\n");
}
printf("\n");
}
}

	int check()
	{
	if(s.top==-1)
	return 0;
	else if(s.top==9)
		return 1;
	};

	void push()
	{
	int n;
	if(check()==0)
	{
	printf("Enter element to be pushed\n");
	scanf("%d",&n);
	s.top=s.top+1;
	s.stk[s.top]=n;
	}
	else 
	printf("Stack is full\n");
	};
	
	void pop()
	{
		int n;
		if(check()==0)
		printf("Empty stack\n");
		else
		{
			n=s.stk[s.top];
			s.top=s.top-1;
			printf("%d is popped out\n",n);
		}
	};

	void disp()
	{
	int i;
	if(check()==0)
	printf("Empty stack\n");
	else
	{
	printf("Displaying stack\n");
	for(i=s.top;i>=0;i--)
	printf("%d\n",s.stk[i]);
	}
	};





