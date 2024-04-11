#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //Destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;  
    }
};

void insertAtTail(Node* & tail ,int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtHead(Node* &head , int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtPosition(Node* &tail, Node* &head , int position, int d){

    // insert at start
    if(position == 1){
        insertAtHead(head , d);
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
        insertAtTail(tail,d);
        return;
    }

    //Creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void deleteNode(int position , Node* &head){
    
    //deleting first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //Memory fee start node
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

        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}

int main()
{

    //new node create
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    //head pointeed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtTail(tail , 12);

    print(head);

    insertAtTail(tail , 15);
    print(head);

    insertAtPosition(tail,head , 4, 22);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(4,head);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl; 

    return 0;
}