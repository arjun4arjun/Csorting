#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};

struct Node*Insert(struct Node*head,int data){
struct Node*newnode=(struct Node*)malloc(sizeof (struct Node));
newnode->next=head;
newnode->data=data;
head=newnode;

/* if(head == NULL){
    return newnode;
}
struct Node*temp=head;
while(temp != NULL){
    temp=temp->next;
}
temp->next=newnode; */
return head;
}

void print(struct Node*head){
    struct Node*temp=head;
    while(temp != NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf(" NULL ");
}

int main(){
    struct Node*head = NULL;
    head=Insert(head,10);
    head=Insert(head,20);
    head=Insert(head,30);
    print(head);
    printf("\n Execution successful");
    return 0;
}