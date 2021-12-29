#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

Node* head = NULL;

Node *GetNewNode(int);
void InsertAtHead(int);
void Print();
void PrintReverse();

////////---MAIN---/////////
int main(int argc, char const *argv[])
{
    InsertAtHead(4);
    InsertAtHead(2);
    InsertAtHead(6);
    InsertAtHead(1);
    InsertAtHead(9);
    Print();
    PrintReverse();
    
    return 0;
}

Node *GetNewNode(int x){

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;

} 

void InsertAtHead(int data){
    Node* newNode = GetNewNode(data);
    if(head == NULL){
        head = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}

void Print(){
    Node* temp = head;

    printf("Forward Order: ");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void  PrintReverse(){
    Node* temp = head;
    if(temp == NULL) return;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    printf("Reverse Order: ");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    
    printf("\n");

}