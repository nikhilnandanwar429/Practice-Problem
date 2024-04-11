#include<stdio.h>
#include<stdlib.h>
int count = 0;

struct node
{
    int data;
    struct node* next;
    struct node* prev;
}*head = 0,*first = 0,*temp = 0;

void countNode(){
    temp = first;
    while(temp != 0){
        count++;
        temp = temp -> next;
    }
}

void create(){
    head = (struct node*) malloc(sizeof(struct node));
    printf("Enter data to insert : ");
    scanf("%d",&head -> data);
    head -> next = 0;
    head -> prev = 0;
    if(first == 0){
        first=temp=head;
    }
    else{
        temp -> next = head;
        head -> prev = temp;
        temp = head;
    }
}

void deleteBetween(){
    int pos,i;
    printf("Enter position to delete : ");
    scanf("%d" , &pos);
    countNode();
    if(pos<=0){
        printf("Invalid Position \n");
    }
    else if(pos == 1){
        if(first == 0){
            printf("List is Empty \n");
        }
        else{
            temp = first;
            first = first -> next;
            first -> prev = 0;
            free(temp);
        }
    }
    else if(pos == count){
        temp = head;
        head = head -> prev;
        head -> next = 0;
        free(temp);
    }
    else{
        temp = first;
        i=1;
        while(i != pos){
            temp = temp -> next;
            i++;
        }
        temp -> prev -> next = temp -> next;
        temp -> next -> prev = temp -> prev;
        free(temp);
        printf("Node deleted \n");
    }
}

void traverseReverse(){
    temp = head;
    printf("Data in nodes : \n");
    while(temp != 0){
        printf("%d ",temp -> data);
        temp = temp -> prev;
    }
    printf("\n");
}



int main(){
    create();
    create();
    create();
    create();
    create();

    deleteBetween();

    traverseReverse();
}