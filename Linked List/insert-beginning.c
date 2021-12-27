#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* head = NULL;

void Insert(int);
void InsertEnd(int);
void Print();


int main()
{
    int x,n,i;

    printf("Enter node counts: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("enter element: ");
        scanf("%d",&x);
        InsertEnd(x);
        Print();
    }
    
    

    return 0;
}

void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = head;
    head = temp;
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
    printf("List is: ");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}