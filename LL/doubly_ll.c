#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*prev;
    struct Node*next;
};
struct Node*createnode(int data){
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
struct Node*insertion_f(struct Node*head,int data){
    struct Node*newnode=createnode(data);
    if(head !=NULL){
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
    return head;    
}
struct Node*insertion_e(struct Node*head,int data){
    struct Node*newnode=createnode(data);
if (head==NULL){
    return newnode;
}
    struct Node*temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp-> next = newnode;
    newnode->prev=temp;
    return head;
}

int print_f(struct Node*head){
struct Node*temp=head;
while (temp != NULL){
    printf("%d, ", temp->data);
    temp=temp->next;
}
}

void print_e(struct Node*head){
    struct Node*temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    while(temp !=NULL){
        printf("%d",temp->data);
        temp=temp->prev;
    }

}
struct Node*delete_f(struct Node*head){
    if (head==NULL){
        return NULL;
    }
    if(head->next !=NULL){
        head=head->next;
        head->prev=NULL;
    }

    return head;
}
int main(){
    struct Node*head=NULL;
    head = insertion_e(head,10);
    head = insertion_e(head,30);
    head = insertion_e(head,90);
    head= insertion_f(head, 05);
    head=delete_f(head);
    print_f(head);
    print_e(head);
    return 0;
}