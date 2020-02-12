#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *start){
    struct node *p;
    p=start;
    printf("list is: ");
    while(p->next!=NULL){
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main() 
{ 
	struct node* head = NULL; 
	struct node* second = NULL; 
	struct node* third = NULL; 
    struct node* fourth = NULL; 
    struct node* fifth = NULL; 
	head = (struct node*)malloc(sizeof(struct node)); 
	second = (struct node*)malloc(sizeof(struct node)); 
	third = (struct node*)malloc(sizeof(struct node)); 
	head->data = 1; 
	head->next = second; 
	second->data = 2; 
	second->next = third; 

	third->data = 3;
	third->next = fourth; 
    fourth->data=6;
    fourth->next=NULL;
    display(head);
    

	return 0; 
} 