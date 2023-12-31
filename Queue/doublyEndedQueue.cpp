#include<bits/stdc++.h>
using namespace std;

class Deque{
    int* arr;
    int size;
    int front;
    int rear;

    public:
    //Initialize your data structure
    Deque(int n){
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    bool pushFront(int x){

        //check full or not
        if( isFull() ){
            cout<<"Queue is full"<<endl;
            return false;
        }

        else if( isEmpty() ){
            front = rear = 0;
        }

        else if(front == 0 && rear != size-1){
            front = size-1;
        }

        else{
            front--;
        }
        
        arr[front] = x;
        return true;
    }

    bool pushRear(int x){

        if( isFull() ){
            cout<<"Queue is full"<<endl;
            return false;
        }

        else if( isEmpty() ){
            front = rear = 0;
        }

        else if(rear == size-1 && front != 0){
            rear = 0 ;
        }

        else{
            rear++;
        }
        
        arr[rear] = x;
        return true;
    }

    int popFront(){

        if( isEmpty() ){ // to check queue is empty
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        
        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){  //single element is present
            front = rear = -1;
        }

        else if(front == size - 1){
            front = 0; //to maintain cyclic nature
        }

        else{   //normal flow
            front++;
        }

        return ans;

    }

    int popRear(){

        if( isEmpty() ){ // to check queue is empty
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        
        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear){  //single element is present
            front = rear = -1;
        }

        else if(rear == 0){
            rear = size-1 ; //to maintain cyclic nature
        }

        else{   //normal flow
            rear--;
        }

        return ans;

    }

    int getFront(){

        if(isEmpty()){
            return -1;
        }

        return arr[front];
    }

    int getRear(){

        if(isEmpty()){
            return -1;
        }

        return arr[rear];
    }

    bool isEmpty(){

        if(front == -1)
            return true;
        
        else
            return false;
    }

    bool isFull(){

        if( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1) ) ){
            return true;
        }

        else{
            return false;
        }
    }
};

int main(){

    Deque d(5);

    d.pushFront(2);
    d.pushRear(3);
    d.pushFront(2);
    d.pushRear(3);
    d.pushFront(2);
    d.pushRear(3);

    d.popFront();
    d.popRear();
    d.popFront();
    d.popRear();
    d.popFront();
    d.popRear();
    d.popFront();
    d.popRear();
}
