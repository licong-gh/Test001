#include<stdio.h>


struct Node
{
	Type * data;
	struct Node *prev;
	struct Node *next;
};	
struct Node Node;

struct data
{
	int yr;
	int mo;
	int day;
};
int main()
{
	data da[3];
	scanf("%d%d%d",&da[0].day,&da[0].mo,&da[0].yr); 
	printf("%d %d %d",da[0].day,da[0].mo,da[0].yr);
	return 0;
} 
