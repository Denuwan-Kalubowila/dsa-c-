#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void printLinkedList(struct Node* llist){
    while(llist != NULL){
        printf("%d  ",llist->data);
        llist=llist->next;
    }
}
void addElementNth(int data,int x){
    struct Node * temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->data=data;
    temp1->next=NULL;
    if(x==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node * temp2=head;
    for(int i=0;i<x-2;i++){
        temp2=temp2->next;

    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    
}
void recursiveReverse(struct Node* p){
    if(p->next==NULL){
        head=p;
        return;
    }
    recursiveReverse(p->next);
    struct Node * temp=p->next;
    temp->next=p;
    p->next=NULL;
}

int main(){
    head=NULL;
    addElementNth(2,1);//2
    addElementNth(3,2);//2,3
    addElementNth(4,1);//4,2,3
    addElementNth(5,2);//4,5,2,3
    printLinkedList(head);
    printf("\n");
    recursiveReverse(head);
    printLinkedList(head);

}