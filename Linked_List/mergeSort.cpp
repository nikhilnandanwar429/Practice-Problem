#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;


    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory is free fofr node with data " << val <<endl;
    }
};

node* merge(node* left , node* right){

    if(left == NULL){
        return right;
    }

    if(right == NULL){
        return left;
    }
    node* ans = new node(-1);
    node* temp = ans;

    while(left != NULL && right != NULL){
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }

        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }

        while(left != NULL){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }

        while(right != NULL){
             temp -> next = right;
            temp = right;
            right = right -> next;
        }

        ans = ans -> next;
        return ans;
    }
    

}

node* findMid(node* head){
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

node* mergeSort(node* headd){

    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    //Break linked list into 2 halves, sfter finding mid
    node* mid = findMid(head);

    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL;

    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    //merge both left and right halves
    node* result = merge(left , right);

    return result;
}