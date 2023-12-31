#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout << "Memory free for node data " << val <<endl;
    }
};

//teaversing Linked list
void print(Node* head ){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

//Gives length of linked list
int getLength(Node* head ){
    int len =0 ;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &tail,Node* &head , int d){
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &tail,Node* &head , int d){

    if(head == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }

    else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    
}

void insertAtPosition(Node* &tail,Node* &head , int position , int d){
    // insert at start
    if(position == 1){
        insertAtHead(tail,head , d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    //Inserting at last posotion
    if(temp -> next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    //Creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position , Node* &head){
    
    //deleting first node
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = head -> next;
        //Memory free start node
        temp -> next = NULL;
        delete temp;

    }

    //deleting any middle node or last node
    else{
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = current;
            current = current -> next;
            cnt++;
        }

        current -> prev = NULL;
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(tail,head , 13);
    print(head);

    insertAtHead(tail,head , 11);
    print(head);

    insertAtHead(tail,head , 8);
    print(head);

    insertAtTail(tail,tail , 25);
    print(head);
    

    insertAtPosition( tail ,head , 2 ,100);
    print(head);

    insertAtPosition(tail ,head ,  1 ,120);
    print(head);

    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;

    insertAtPosition(tail ,head ,  8 ,109);
    print(head);

    deleteNode(1,head);
    print(head);

    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;

    deleteNode(6,head);
    print(head);

    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;

    deleteNode(6,head);
    print(head);

    cout << "head "<< head -> data << endl;
    cout << "tail "<< tail -> data << endl;


    return 0;
}