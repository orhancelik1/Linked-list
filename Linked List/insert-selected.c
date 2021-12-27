#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
   
}Node;

Node* head = NULL;

void Insert(int, int);
void Print();

int main(){

    Insert(3,1); //3
    Insert(2,2); //3 2
    Insert(5,1); //5 3 2
    Insert(4,2); //5 4 3 2

    Print();

    return 0;
}

void Insert(int data, int n){
    Node* temp1 = (Node*)malloc(sizeof(Node));
    temp1->data = data;
    temp1->next = NULL;

    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }

    Node* a = head;
    for (int i = 0; i < n-2; i++)
    {
        a = a->next;
    }

    /*
    temp1->next = a->next
    a->next = temp1
    */

    temp1->next = a->next;
    a->next = temp1;
    
}

void Print(){
    Node* temp = head;
    printf("List is: ");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}


