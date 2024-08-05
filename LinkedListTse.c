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

void add_list_end(const node *p);
void add_list(const node *p, int code);
void show_list(void);
node *find_node(int code);
int del_node(int code);
void free_list(void);

int read_text(char str[], int size, int flag);

int main(void){
	int k,sel,code;
	float grd;
	node *p,n;
	head = NULL;
	
}

void add_list_end(const node *p){
	node *new_node;
	new_node = (node*) malloc(sizeof(node));
	if(new_node == NULL){
		printf("Err");
		exit(EXIT_FAILURE);	
	}
	*new_node = *p;
	new_node ->next = NULL;
	if(head==NULL){
		head = tail = new_node;
	}
	else{
		tail ->next = new_node;
		tail = new+node;
	}
}
void add_list(const node *p,int code){
	node *new_node, *ptr;
	ptr = head;
	while(ptr!=NULL){
		if(ptr->code == code){
			new_node = (node*) malloc(sizeof(node));
			if(new_node ==NULL){
				printf("ERR");
				exit(EXIT_FAILURE);
			}
			*new_node = *p;
			new_node -> next = ptr -> next;
			ptr -> next = new_node;
			if(ptr == tail){
				tail = new_node;
				return;
			}
			ptr = ptr -> next;
		}
	}
}
void show_list(void){
	node *p;
	p = head;
	while(p!=NULL){
		p = p->next;
	}
}
node *find_node(int code){
	node *p;
	p = head;
	while(p!=NULL){
		if(p->code ==code){
			return p;
		p = p -> next;
		}
	}
}

