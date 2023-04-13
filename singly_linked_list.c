#include<stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head=0,*newnode,*temp;
	int choice=1;
	while(choice==1)
	{
		printf("enter data to inster = ");
		newnode = (struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("enter 1 to continue, 0 to stop : ");
		scanf("%d",&choice);
	}
	printf("Entered elements :\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	return 0;

}