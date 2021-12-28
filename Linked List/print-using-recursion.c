#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
    
}Node;


void Print(Node* p){
    if (p == NULL) return;

    printf("%d ",p->data);
    Print(p->next);

}
Node* Insert(Node* head, int data){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    head = temp;

    else{
        Node* temp2 = head;
        while (temp2->next != NULL) temp2 = temp2->next;
        
        temp2->next = temp;
        
        return head;
    }
    
    
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;

    head = Insert(head,4);
    head = Insert(head,3);
    head = Insert(head,6);
    head = Insert(head,5);
    head = Insert(head,9);

    Print(head);

    return 0;
}
