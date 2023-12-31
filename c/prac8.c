#include<stdio.h>
#include<stdlib.h>

int count = 0;

struct node{
    int usn;
    char name[50];
    char branch[50];
    int sem;
    char phno[10];
    struct node* next;
       
}*head = 0,*temp = 0,*first = 0; 

void create(){
    head = (struct node*)malloc(sizeof(struct node));
    printf("Enter your user name(integer) : ");
    scanf("%d",&head -> usn);
    printf("Enter your name(string) : ");
    scanf("%s",&head -> name);
    printf("Enter your branch name(string) : ");
    scanf("%s",&head -> branch);
    printf("Enter your sem(integer) : ");
    scanf("%d",&head -> sem);
    printf("Enter your phone no.(string) : ");
    scanf("%s",&head -> phno);
    head -> next = 0;
    if(first == 0){
        first = temp = head ;
    }
    else{
        temp -> next = head;
        temp = head;
    }
}

void traverse(){
    temp = first;
    count = 0;
    int i=1;
    while (temp != 0)
    {
        printf("Data %d :\n",i);
        printf("\t your user name is : %d \n",temp -> usn);
        printf("\t your name is : %s \n",temp -> name);
        printf("\t your branch name is : %s \n",temp -> branch);
        printf("\t your sem is : %d \n",temp -> sem);
        printf("\t your phone no. is : %s \n",temp -> phno);
        count++;
        temp = temp -> next;
        i++;
    }
    
}

void insertBegin(){
    struct node* new;
    if(first == 0){
        create();
    }
    else{
        new = (struct node*) malloc(sizeof(struct node));
        printf("Enter your user name : ");
        scanf("%d",&new -> usn);
        printf("Enter your name : ");
        scanf("%s",&new -> name);
        printf("Enter your branch name : ");
        scanf("%s",&new -> branch);
        printf("Enter your sem : ");
        scanf("%d",&new -> sem);
        printf("Enter your phone no. : ");
        scanf("%s",&new -> phno);
        new -> next = 0;
        new -> next = first;
        first = new;
    }
}    

void insertEnd(){
    struct node * new;
    if(first == 0){
        create();
    }
    else{
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter your user name : ");
        scanf("%d",&new -> usn);
        printf("Enter your name : ");
        scanf("%s",&new -> name);
        printf("Enter your branch name : ");
        scanf("%s",&new -> branch);
        printf("Enter your sem : ");
        scanf("%d",&new -> sem);
        printf("Enter your phone no. : ");
        scanf("%s",&new -> phno);
        new -> next = 0;
        head -> next = new;
        head = new;
    }
}

void deleteBegin(){
    if(first == 0){
        printf("List is empty \n");
    }
    else{
        temp = first;
        first = first -> next;
        free(temp);
    }
}

void deleteEnd(){
    temp = first;
    if(first == 0){
        printf("List is empty \n");
    }
    else if(first == head){
        first = 0;
        free(temp);
    }
    else{
        struct node* prev = 0;
        while(temp -> next != 0){
            prev = temp;
            temp = temp -> next;
        }
        prev -> next = 0;
        head = prev;
        free(temp);
    }
}

int main(){
    int k;
    printf("\t 1.Create a linked list \n\t 2.Insert at Begin \n\t 3.Insert at End \n\t 4.Delete at Begin \n\t 5.Delete at End \n\t 6.Print Linked List \n\t 7.Exit \n");
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
            traverse();
            break;
        case 7:
            printf("You Exited Successfully \n");
            break;
        default:
            printf("Enter valid number \n");
            break;
        }
    }while(k!=7);
    return 0;
}
