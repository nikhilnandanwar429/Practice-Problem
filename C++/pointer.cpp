#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    cout<< num <<endl;
    //address of Operator
    cout<<"Addres of Operator "<< &num <<endl;

    int *ptr = &num;

    cout<<"*Ptr of Operator "<< *ptr <<endl;

    cout<<"Ptr of Operator "<< ptr <<endl;

    double d = 4.3;
    double *p2 = &d;
    cout<<"*p2 of Operator "<< *p2 <<endl;

    cout<<"p2 of Operator "<< p2 <<endl;

    cout<<"Size of double is "<< sizeof(d) <<endl;
    cout<<"Size of integer is "<< sizeof(num) <<endl;
    cout<<"Size of pointer is "<< sizeof(ptr) <<endl;
    cout<<"Size of pointer is "<< sizeof(p2) <<endl;
    


}