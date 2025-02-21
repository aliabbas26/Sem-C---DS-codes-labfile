#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void insert_at_end(struct node *head , int data);

int main(){

    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 3;
    current -> link = NULL;
    head -> link -> link = current;

    insert_at_end(head, 67);

    // if(head == NULL)
    //     printf("Linked list is empty");
    // struct node *ptr = NULL;
    // ptr = head;
    // while(ptr != NULL){                         //Printing of updated LL
    //     printf("%d \t", ptr -> data);
    //     ptr = ptr -> link;
    // }
    
    return 0;
}

void insert_at_end(struct node *head , int data){
    struct node *ptr , *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;

    while(ptr -> link != NULL){   //Time Complexity: O(n) need optimal code  without traversing
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}
