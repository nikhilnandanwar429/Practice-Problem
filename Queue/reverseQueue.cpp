#include<bits/stdc++.h>
using namespace std;


//USING STACK
queue<int> reverse(queue<int>& q){

    stack<int> s;

    while( !q.empty() ){
        
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while( !s.empty() ){

        int element = s.top();
        s.pop();
        q.push(element);
    }

    while( !q.empty() ){
        cout<< q.front() <<" ";
        q.pop();
    }

    return q;
}

//USING RECURSSION
void rev(queue<int>& q){

    if(q.empty()){
        return;
    }
        
    int n = q.front();
    q.pop();

    rev(q);

    q.push(n);

}

void printQueue(const queue<int> &q) {
    
    queue<int> temp = q;

    while (!temp.empty()) {

        cout << temp.front() << " ";
        temp.pop();

    }

    cout << endl;
}

int main()
{
    queue<int> q;

    q.push(15);
    q.push(5);
    q.push(04);
    q.push(56);
    q.push(31);
    q.push(47);

    printQueue(q);
    
    //queue<int> t = reverse(q);

    rev(q);

    printQueue(q);

}