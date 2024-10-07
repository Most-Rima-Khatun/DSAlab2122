#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void linkedTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node * insertAtFirst(struct node *head,int data){
struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->next=head;
ptr->data=data;
return ptr;
};
struct node *insertAtIndex(struct node *head,int data,int index){
struct node *ptr=(struct node *)malloc(sizeof(struct node));
struct node *p=head;
int i=0;
while(i!=index-1){
    p=p->next;
    i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return head;
};
struct node *insertAtLast(struct node *head,int data){
struct node *ptr=(struct node *)malloc(sizeof(struct node));
struct node *p=head;
while(p->next!=NULL){
    p=p->next;
}
ptr->data=data;
p->next=ptr;
ptr->next=NULL;
return head;
};
struct node *deleteFirst(struct node *head){
struct node *ptr=head;
head=head->next;
free(ptr);
return head;
};
struct node *deleteAtIndex(struct node *head,int index){
struct node *p=head;
struct node *q=head->next;
for(int i=0;i<index-1;i++){
    p=p->next;
    q=q->next;
}
p->next=q->next;
free(q);
return head;
};
struct node *deleteAtLast(struct node *head){
struct node *p=head;
struct node *q=head->next;
while(q->next!=NULL){
    p=p->next;
    q=q->next;
}
p->next=NULL;
free(q);
return head;
};
int searching(struct node *head,int number){
struct node *ptr=head;
while(ptr->next!=NULL){
    if(ptr->data==number){
        return printf("%d\n",number);
    }
    ptr=ptr->next;
}
        return printf("-1\n");
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
     head->data=6;
     head->next=second;
     second->data=14;
     second->next=third;
     third->data=20;
     third->next=fourth;
     fourth->data=9;
     fourth->next=NULL;

     linkedTraversal(head);
     printf("after insertion at first:\n");
     head=insertAtFirst(head,29);
     linkedTraversal(head);
     printf("after insertion at middle:\n");
     head=insertAtIndex(head,34,3);
     linkedTraversal(head);
     printf("after intertion at last:\n");
     head=insertAtLast(head,25);
     linkedTraversal(head);
     printf("after deletion at first:\n");
     head=deleteFirst(head);
     linkedTraversal(head);
     printf("after deletion from index:\n");
     head=deleteAtIndex(head,3);
     linkedTraversal(head);
     printf("after deletion from last:\n");
     head=deleteAtLast(head);
     linkedTraversal(head);
     searching(head,1);
     return 0;
}