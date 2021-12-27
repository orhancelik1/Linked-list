#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;

}Node;

Node* head = NULL;

void InsertEnd(int); //sona ekleme
void Print();
void Delete(int);

////MAIN
int main(){

    InsertEnd(3);
    InsertEnd(5);
    InsertEnd(7);
    InsertEnd(2);
    InsertEnd(9);
    Print(); //3 5 7 2 9
    printf("enter position: ");
    int n;
    scanf("%d",&n);
    Delete(n);
    printf("after deletion "); 
    Print(); 


    return 0;
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

void Delete(int n){
    Node* temp = head;
    if (n == 1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; i < n-2; i++)
    {
        temp = temp->next;
    }
    Node* temp2 = temp->next; //nth node
    temp->next = temp2->next; //(n+1)th node
    free(temp2); // free nth node
    
    
}

void Print(){
    Node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    printf("\n");
}