#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* insert_at_end_notrvsing(struct node *ptr , int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    ptr -> link = temp;
    return temp;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *ptr = head;
    ptr = insert_at_end_notrvsing(ptr, 98);
    ptr = insert_at_end_notrvsing(ptr, 3);
    ptr = insert_at_end_notrvsing(ptr, 67);

    ptr = head;

    while(ptr != NULL){
        printf("%d \t", ptr -> data);
        ptr = ptr -> link;
    }
    return 0;
}