#include<stdlib.h>
#include<stdio.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;

void InsertEnd(int);
void Reverse(Node*);
void Print();

int main(int argc, char const *argv[])
{   
    InsertEnd(4);
    InsertEnd(2);
    InsertEnd(6);
    InsertEnd(7);
    InsertEnd(1);
    Print();
    Reverse(head);
    Print();

    return 0;
}



void Reverse(Node* p){
    if (p->next == NULL)
    {
        head = p;
        return;
    }

    Reverse(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
    
}

void InsertEnd(int data){
    
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }else{

    Node* a = head;
    while (a->next != NULL)
    {
        a = a->next;
    }
    a->next = temp;  
    
    }

}

void Print(){
    Node* temp = head;
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}