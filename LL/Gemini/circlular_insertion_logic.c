// C program for insertion in Circular queue
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert(int element) {
    // Condition to check if the circular queue is full
    if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1))) {
        printf("\nQueue Overflow: Cannot insert %d", element);
    } 
    // Inserting the first element
    else if (front == -1) {
        front = rear = 0;
        queue[rear] = element;
        printf("\nInserted: %d", element);
    } 
    // Circular increment of rear when it reaches the end of the array
    else if (rear == SIZE - 1 && front != 0) {
        rear = 0;
        queue[rear] = element;
        printf("\nInserted: %d", element);
    } 
    // Normal insertion
    else {
        rear++;
        queue[rear] = element;
        printf("\nInserted: %d", element);
    }
}
int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    return 0;
}