#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
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
    head=insert(head,35);
    head=inserT(head,40);
    print(head);
    head=Reverse(head);
    print(head);
    return 0;
}