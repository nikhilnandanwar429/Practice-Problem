#include<iostream>
using namespace std;


//Macro ==> A piece of code in a program that is replaced by value of macro
//NO extra storage 
//Can't be change 

#define PI 3.14

int main()
{
    int r = 5;
    double area = PI * r * r;
    cout<<"Ares is "<< area <<endl;

    return 0;

}