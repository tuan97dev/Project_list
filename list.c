#include "list.h"

struct node* addToEmpty(struct node* head, int data)
{
    struct node* temp = malloc(sizeof(struct node)); 
    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node* addAtEnd(struct node* head, int data)
{
    struct node* temp, *tp;
    temp = malloc(sizeof(struct node));
	if (head == NULL) {
		temp->prev = NULL;
	    temp->data = data;
	    temp->next = NULL;
	    head = temp;
	} else {
	    temp->prev = NULL;
	    temp->data = data;
	    temp->next = NULL;
	    tp = head;
	    while(tp->next != NULL)
	        tp = tp->next;
	    tp->next = temp;
	    temp->prev = tp;		
	}

    return head;
}

struct node* createList(struct node* head)
{
	int n, data, i=0; 
	
	do{
		printf("Nhap gia tri cho phan tu thu %d: ", i+1);
		scanf("%d", &data);
	    if (data != 0){
	        head = addAtEnd(head, data);
	        i++;
	    }
    }while (data != 0);
    
	return head;
}
