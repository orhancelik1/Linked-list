#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
    
} Node;

Node* head = NULL;

void Insert(int);
void Reverse();
void Print();

int main(int argc, char const *argv[])
{
    Insert(1);
    Insert(4);
    Insert(2);
    Insert(7);
    Print();
    Reverse();
    Print();
    return 0;
}

void Insert(int data){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = head;
    head = temp; 

}
void Reverse(){
    Node *next, *prev, *current;
    current = head;
    prev = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void Print(){
    Node* temp = head;
    while (temp!= NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}