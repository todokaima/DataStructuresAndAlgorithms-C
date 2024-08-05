#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	char name[100];
	int code;
	float grd;
	node *next;
} node;

node *head;

void add_stack(const node *p);
void show_stack(void);
void pop(void);
int size_stack(void);
void free_stack(void);

int read_text(char str[], int size, int flag);

int main(void){
	int sel;
	node n;
	head = NULL;
	while(1){
		printf("\nMenu Selection\n");
		printf("-----------------\n");
		printf("1.Add Student\n");
		printf("view all\n");
		printf("view top\n");
		printf("del top\n");
		printf("number of\n");
		printf("exit\n");
		printf("\nEnter Choice");
		scanf("%d", &sel);
		switch(sel){
			case 1:
				get char();
				printf("Name: ");
				read_text(n.name, sizeof(n.name),1);
				printf("Code: ");
				scanf("%d",&n.code);
				printf("Grade: ");
				scanf("%f",&n.grd);
				add_stack(&n);
				break;
			case 2:
				if (head !=NULL)
					show_stack();
				else
					printf("\nThe stack is empty");
				break;
			case 3:
				if (head!=NULL)
					printf("\nC:%d N: %s G: %.2f \n\n",head->code,head->name,head->grd);
				else
					printf("The stack is empty\n");
				break;
			case 4:
				if (head!=NULL)
					pop();
				else
					printf("\nThe stack is empty");
				break;
			case 5:
				if (head!=NULL)
					printf("\n%d students exist in stack\n",size_stack());
				else
					printf("\nThe stack is empty");
				break;
			case 6:
				if (head!=NULL)
					free_stack();
				return 0;
				default
					print("\nWrong choice");
				break;
		}
		
	}
	return 0;
}
void add_stack(const node *p)
{
	node *new_node;
	new_node = (node*) malloc(sizeof(node));
	if (new_node ==NULL){
		printf("Error: Not available memory\n");
		exit(EXIT_FAILUE);
	}
	*new_node = *p;
	new_node ->next = heap;
	head = new_node;
}
void show_stack(void){
	node *p;
	p = head;
	printf("\nStudent adata\n");
	while( p!=NULL){
		printf("C:%d N:%s G:%2f\n\n",p->code,p->name,p->grd);
		p = p->next;
	}
}
void pop(void){
	node *p;
	p = head->next;
	printf("\n Student with code %d deleted", head->code);
	free(head);
	head = p;
}
int size_stack(void)
{
	node *p;
	int num;
	num = 0;
	p = head;
	while(p!=NULL){
		p = p->next;
		num++;
	}
	return num;
}
void free_stack(void){
	node *p, *next_node;
	p = head;
	while(p!=NULL){
		next_node = p->next;
		free(p);
		p = next_node;
	}
}
