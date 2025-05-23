#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

void createLL(){
    struct node*head,*newNode,*temp,*insert;
    int choice=1,count=0;
    head=NULL;
    while(choice){
        newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data....\n");
    scanf("%d",&newNode->data);
    if(head==NULL){
        head=temp=newNode;
    }else{
        temp->next=newNode;
        newNode->next=NULL;
        temp=newNode;
    }
    printf("Do you want to add more node(1,0)\n");
    scanf("%d",&choice);
    }

    //printing data
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
        count++;
    }
    printf("NULL\n");
    printf("Number of nodes are %d",count);

    //insertion at the end
    insert=(struct node*)malloc(sizeof(struct node));
    insert->data=10;
    insert->next=NULL;

    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=insert;


    //printing
    temp=head;
    printf("linked listed after insertion \n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
        count++;
    }
    printf("NULL");

}

int main(){
    createLL();
    return 0;
}
