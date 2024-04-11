#include<iostream>
#include<queue>
using namespace std;

class Queue {
    int* arr;
    int qfront;
    int rear;
    int size;

    public:
    Queue(){
        size = 100001;
        arr = new int [size];
        qfront = 0;
        rear = 0;
    }

    void enqueue(int data){ //push Operation
        if(rear == size){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue(){
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front(){
        if(qfront == rear){
            return -1;
        }
        else {
            return arr[qfront];
        }
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        else{
            return  false;
        }
    }

};

int main()
{
    //create a quqeuq
    Queue q;

    q.enqueue(11);
    cout<<"Front "<<q.front()<<endl;

    q.enqueue(15);
    cout<<"Front "<<q.front()<<endl;

    q.enqueue(13);
    cout<<"Front "<<q.front()<<endl;

    // cout<<"Size "<<q.size()<<endl;

    q.dequeue();
    q.dequeue();
    

    // cout<<"Size "<<q.size() <<endl;

    cout<<"Front "<<q.front()<<endl;

    q.dequeue();

    if(q.isEmpty())
        cout<<"Empty"<<endl;
    else
        cout<<"Not Empty"<<endl;
}