/*A simple Tower of Hanoi using iteration.
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct TOWER
{
	int n;
	char peg[3];
}tower;
void push(tower [],tower,int *);
tower pop(tower [],int *);
void main()
{
	tower t[100],item,temp;
	int n,top=-1;
	char temp1;
	printf("Enter the value of n:");
		scanf("%d",&n);
	item.n=n;
	item.peg[0]='A';
	item.peg[1]='B';
	item.peg[2]='C';
	while(1)
	{
		while(1)
		{
			push(t,item,&top);
			item.n=item.n-1;
			if(item.n==0)
				break;
			temp1=item.peg[1];
			item.peg[1]=item.peg[2];
			item.peg[2]=temp1;	
		}
		item=pop(t,&top);
		printf("move disc %d from %c to %c\n",item.n,item.peg[0],item.peg[2]);
		item=pop(t,&top);
		printf("move disc %d from %c to %c\n",item.n,item.peg[0],item.peg[2]);
		temp.n=item.n-1;
		temp.peg[0]=item.peg[1];
		temp.peg[1]=item.peg[0];
		temp.peg[2]=item.peg[2];
		item=temp;
		//push(t,temp,&top);
	}	
}
void push(tower t[],tower item,int *top)
{
	if(*top==99)
	{
		printf("Not enough memory\n");
		exit(0);
	}
		
	++(*top);
	t[*top].n=item.n;
	t[*top].peg[0]=item.peg[0];
	t[*top].peg[1]=item.peg[1];
	t[*top].peg[2]=item.peg[2];
}

tower pop(tower t[],int *top)
{
	if(*top==-1)
		exit(0);
	else
	{
		return t[(*top)--];
	}
}		
