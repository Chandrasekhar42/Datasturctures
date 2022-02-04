#include <stdio.h>
#include <stdlib.h>
struct node {
	char info;
	struct node* next;
};

struct node* last = NULL;
void addatlast()
{
	
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data to be "
		"inserted : \n");
	scanf("%d", &data);

	if (last == NULL) {
		temp->info = data;
		temp->next = temp;
		last = temp;
	}

	else {
		temp->info = data;
		temp->next = last->next;
		last->next = temp;
		last = temp;
	}
}

void viewList()
{
	if (last == NULL)
		printf("\nList is empty\n");

	else {
		struct node* temp;
		temp = last->next;
		char first;
		first=temp->info;
		do {
			printf("%c->",temp->info);
			temp = temp->next;
		} while (temp != last->next);
		printf("%c",first);
	}
}


int main()
{
	
	addatlast();
	addatlast();
	addatlast();
	addatlast();
    addatlast();
	
	viewList();

	return 0;
}
/*
Enter data to be inserted :
97

Enter data to be inserted :
101

Enter data to be inserted :
105

Enter data to be inserted :
111

Enter data to be inserted :
117
a->e->i->o->u->a
