#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void traverse(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("Element=%d\n",temp->data);
        temp=temp->next;
    }
    //printf("Element=%d\n",temp->data);
}
void middle(struct node *head){
    struct node *temp=head;
    struct node *flag=head;
    while(flag->next!=NULL){
        temp=temp->next;
        flag=flag->next->next;
    }
    printf("Middle Element of Linked List=%d",temp->data);
}
int main(){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    struct node *q=(struct node *)malloc(sizeof(struct node));
    struct node *r=(struct node *)malloc(sizeof(struct node));
    struct node *s=(struct node *)malloc(sizeof(struct node));
    struct node *t=(struct node *)malloc(sizeof(struct node));
    //create your own Linked List
     p->data=5;
     p->next=q;
     
    q->data=6;
    q->next=r;
    
    r->data=7;
    r->next=s;
    
    s->data=8;
    s->next=t;
    
    t->data=9;
    t->next=NULL;
    traverse(p);//print the linked list
    printf("\n");
    middle(p);//find middle element
    return 0;
}
