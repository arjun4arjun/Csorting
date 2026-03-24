#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};

struct Node* Insert (struct Node*head,int data){
struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
newnode->data=data;
newnode->next=NULL;

if(head == NULL){
    return newnode;
}
struct Node*temp=head;
while(temp->next != NULL){
    temp=temp->next;
}
temp-> next=newnode;
return head;
}

void print(struct Node*head){
struct Node*temp=head;
while(temp != NULL){
    printf("%d -> ",temp-> data);
    temp=temp->next;
}
printf(" NULL ");

}

struct Node* Reverse(struct Node*head){
    struct Node*prev,*next,*current;
    current=head;
    prev=NULL;
    while(current !=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}


int main(){
    struct Node* head =NULL;
    head=Insert(head,20);
    head=Insert(head,30);
    head=Insert(head,35);
    head=Insert(head,40);
    printf("List initally: ");
    print(head);
    head=Reverse(head);
    printf("\nList after reversing: ;");

    print(head);
    return 0;
}