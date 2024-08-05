#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
	char name[100];
	int code;
	float grd;
	node *next;
} node;

node *head;
node *tail;

void add_queue(const node *p);
void show_queue(void);
void pop(void);
void free_queue(void);

int read_text(char str[], int size, int flag);

int main(void){
	int sel;
	node n;
	head = Null
	
}

void add_queue(const node *p){
	node *new_node;
	new_node = (node*) malloc(sizeof(node));
	if (new_node==NULL){
		printf("Error: Not available memory\n");
		exit(EXIT_FAILURE);
	}
	*new_node = *p;
	new_node -> next = NULL;
	if (head == NULL){
		head == tail == new_node;
	}
	else{
		tail -> next = new_node;
		tail = new_node;
	}
}
