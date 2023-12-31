#include<iostream>
#include<map>
using namespace std;


bool isCircularList(Node* head){

    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;

    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

bool detectCycle(Node* head){

    if(head == NULL) {
        return false;
    }

    map<Node* , bool> visited;

    Node* temp = head;

    while(temp != NULL){

        //cycle is present
        if(visited[temp] == true){
            cout << "Cycle is present at "<< temp -> data <<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

Node* floydDetectLoop(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            cout << "present at "<< slow -> data << endl;
            return slow;
        }
    }

    return NULL;
}

Node* getStartingNode(Node* head){
    
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersecton){
        slow = slow -> mext;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head){

    if(head == NULL)
    return;

    Node* startOfLoop = getStartingLoop(head);
    Node* temp = startOfLoop;
    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main()
{
    Node* head = NULL;

    //empty list me insert krre hai
    insertNode(head , 5 ,3);
    print(head);
/*
    insertNode(tail , 3 ,5);
    print(tail);

    insertNode(tail , 5 ,7);
    print(tail);

    insertNode(tail , 7 ,9);
    print(tail);

    insertNode(tail , 5 ,6);
    print(tail);

    deleteNode(tail , 3);
    print(tail);

*/
if(isCircularList(head)){
    cout << "Linked list is Circulaar "<< endl;
}
else{
    cout<< "Linked list is not circular "<<endl;
}

if(floydDetectLoop(head) != NULL){
    cout<< "Cycle is present "<< endl;
}
else
cout<<"Cycle is not present "<< endl;

Node* loop =  getStartingNode(head);

cout<< "loop starts at "<< loop -> data <<endl;

removeLoop(head);

print(head);

}

