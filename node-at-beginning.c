//INSERTING A NODE AT BEGINNING
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link;
};

struct Node* head; 

struct Node* Insert(struct Node* head, int x){
    struct Node* temp;
    temp = (struct Node*)malloc(sizeof(struct Node)); // Allocate space for a node  pointer
    temp->data = x; // insert data at that space
    temp->link = head; // 
    head = temp; // this is new head
    return head;
}

void Print(){
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL){
        printf(" %d", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main(){
    head = NULL; // empty list;
    printf("How many number?\n");
    int n,i,x;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the number\n");
        scanf("%d", &x);
        head = Insert(head, x);
        Print(head);
    }
}
