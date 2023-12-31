#include<stdio.h>
#include<stdlib.h>
int count = 0;

struct node{
    int data;
    struct node* next;
}*head = 0,*temp = 0,*first = 0;

void create(){
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&head -> data);
    head -> next = 0;
    if(first == 0){
        first = temp = head ;
    }
    else{
        temp -> next = head;
        temp = head;
    }
    head -> next = first;
}

void insertBegin(){
    struct node* new;
    if(first == 0){
        create();
    }
    else{
        new = (struct node*) malloc(sizeof(struct node));
        printf("Enter new data : ");
        scanf("%d",&new -> data);
        new -> next = 0;
        new -> next = first;
        first = new;
        head -> next = first;
    }
}

void insertEnd(){
    struct node * new;
    if(first == 0){
        create();
    }
    else{
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter new data : ");
        scanf("%d",&new -> data);
        new -> next = 0;
        head -> next = new;
        head = new;
        head -> next = first;
    }
}

void deleteBegin(){
    if(first == 0){
        printf("List EMpty \n");
    }
    else{
        temp = first;
        first = first -> next;
        head -> next = first;
        free(temp);
    }
}

void deleteEnd(){
    temp = first;
    if(first == 0){
        printf("List Empty \n");
    }
    else if(head == first){
        first = 0;
        free(temp);
    }
    else{
        struct node* prev = (struct node*) malloc(sizeof(struct node));
        temp = first;
        while(temp -> next != first){
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = first;
        head = prev;
        free(temp);
    }
}

void countNode(){
    temp = first;
    do{
        temp = temp -> next;
        count++;
    } while(temp != first);
    printf("Number of nodes is : %d \n",count);
}

int main(){
    int k;
    printf("\t1.Create \n\t2.Insert at Begin \n\t3.Insert at End \n\t4.Delete fron Begin \n\t5.Delete from End \n\t6.Count Nodes \n\t7.Exit");
    do{
        printf("Enter your choice : ");
        scanf("%d",&k);
        switch (k)
        {
        case 1:
            create();
            break;
        case 2:
            insertBegin();
            break;
        case 3:
            insertEnd();
            break;
        case 4:
            deleteBegin();
            break;
        case 5:
            deleteEnd();
            break;
        case 6:
            countNode();
            break;
        case 7:
            printf("You exited successfully \n");
            break;
        default:
            printf("Enter valid number \n");
            break;
        }
    }while(k!=7);
    return 0;
}